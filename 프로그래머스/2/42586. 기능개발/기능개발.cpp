#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;    
    vector<int> days;

    for (int i = 0; i < progresses.size(); i++)
    {
        int remain = 100 - progresses[i];
        int day = (remain + speeds[i] - 1) / speeds[i];
        days.push_back(day);
    }

    int deploy_day = days[0];
    int count = 1;

    for (int i = 1; i < days.size(); i++)
    {
        if (days[i] <= deploy_day)
        {
            count++;
        } else
        {
            answer.push_back(count);
            deploy_day = days[i];
            count = 1;
        }
    }
    
    answer.push_back(count);
    
    return answer;
}