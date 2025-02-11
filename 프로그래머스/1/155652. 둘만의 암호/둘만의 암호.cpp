#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index)
{
    unordered_set<char> skipSet(skip.begin(), skip.end());
    string answer = "";
    
    for (char c : s)
    {
        int count = 0;
        char current = c;
        
        while (count < index)
        {
            current = (current == 'z') ? 'a' : current + 1;
            if (skipSet.find(current) == skipSet.end())
            {
                count++;
            }
        }
        
        answer += current;        
    }
    
    return answer;
}