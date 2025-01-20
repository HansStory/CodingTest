#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> first = {1, 2, 3, 4, 5};
    vector<int> second = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> third = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    vector<int> scores(3, 0);
    
    for(size_t i = 0; i < answers.size(); i++)
    {
        if (answers[i] == first[i % first.size()]) scores[0]++;
        if (answers[i] == second[i % second.size()]) scores[1]++;
        if (answers[i] == third[i % third.size()]) scores[2]++;
    }
    
    int max_score = *max_element(scores.begin(), scores.end());
    
    vector<int> answer;
    for(int i = 0; i < 3; i++)
    {
        if(scores[i] == max_score)
        {
            answer.push_back(i+1);
        }
    }
    
    return answer;
}