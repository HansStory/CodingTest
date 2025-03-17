#include <string>
#include <vector>

using namespace std;

long long solution(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;

    long long prev2 = 1, prev1 = 2, current = 0;
    
    for (int i = 3; i <= n; i++)
    {
        current = (prev1 + prev2) % 1234567;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}