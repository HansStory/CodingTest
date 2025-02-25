#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s)
{
    bool newWord = true;
    
    for (char& c : s)
    {
        if (newWord && isalpha(c))
        {
            c = toupper(c);
        }
        else
        {
            c = tolower(c);
        }
        
        newWord = (c == ' ');
    }
    
    return s;
}