#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int countX = 0, countOther = 0;
    char x = s[0];
    
    for (char c : s)
    {
        if (countX == 0) x = c;
        
        if (c == x) countX++;
        else countOther++;
    
        if (countX == countOther)
        {
            answer++;
            countX = countOther = 0;
        }
    }
    
    if (countX > 0 || countOther) answer++;
    
    return answer;
}