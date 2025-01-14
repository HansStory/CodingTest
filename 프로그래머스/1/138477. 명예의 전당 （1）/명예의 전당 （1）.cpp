#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> hof;
    
    for(int s : score)
    {
        hof.push(s);
        
        if(hof.size() > k)
        {
            hof.pop();
        }
        
        answer.push_back(hof.top());
    }
    
    return answer;
}