#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s)
{
    int transformCount = 0;
    int zeroCount = 0;
    
    while (s != "1")
    {
        int originalLength = s.length();
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        
        int newLength = s.length();
        zeroCount += (originalLength - newLength);
        
        int c = newLength;
        s = "";
        while (c > 0)
        {
            s = (c % 2 == 0 ? "0" : "1") + s;
            c /= 2;
        }
        
        transformCount++;
    }
    
    return {transformCount, zeroCount};
}