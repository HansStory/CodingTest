#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int worldIndex = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            worldIndex = 0;
        }
        else
        {
            s[i] = worldIndex % 2 == 0 ? toupper(s[i]) : tolower(s[i]);
            worldIndex++;
        }
    }
    
    return s;
}