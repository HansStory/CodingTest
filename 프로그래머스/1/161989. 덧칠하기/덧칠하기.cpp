#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section)
{
    int answer = 0;
    int lastPainted = 0;
    
    for (int start : section)
    {
        if (start > lastPainted)
        {
            answer++;
            lastPainted = start + m - 1;
        }
    }
    
    return answer;
}