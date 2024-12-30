#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul)
{
    int x = 0;
    for(int i = 0; i < seoul.size(); i ++)
    {
        if(seoul[i] == "Kim")
        {
            x = i;
            break;
        }
    }
    
    string answer = "김서방은 에 있다";
    answer.insert(13, to_string(x));
    return answer;
}