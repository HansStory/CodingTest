#include <string>
#include <vector>

using namespace std;

bool IsEven(int num)
{
    return num % 2 == 0;
}

int solution(int num)
{
    long long n = num;
    int loopCount = 0;
    int maxLoopCount = 500;
    bool b_isSuccess = false;
    
    while(loopCount <= maxLoopCount)
    {
        if(n == 1)
        {
            b_isSuccess = true;
            break;
        }
        
        if(IsEven(n))
        {
            n /= 2;
        }
        else
        {
            n = n*3 + 1;
        }
        
        loopCount++;
    }
    
    return b_isSuccess ? loopCount : -1;
}