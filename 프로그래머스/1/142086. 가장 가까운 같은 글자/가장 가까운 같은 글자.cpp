#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer(s.size(), -1);
    unordered_map<char, int> lastIndex;
    
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(lastIndex.find(c) != lastIndex.end())
        {
            answer[i] = i - lastIndex[c];
        }
        
        lastIndex[c] = i;
    }
    
    return answer;
}