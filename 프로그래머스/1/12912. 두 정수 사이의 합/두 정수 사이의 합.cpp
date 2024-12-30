#include <string>
#include <vector>

using namespace std;

long long Sum(int smallNum, int bigNum)
{
    long long sum(0);
    
    for(int i = smallNum; i <= bigNum; i++)
    {
        sum += i;
    }
    
    return sum;
}

long long solution(int a, int b)
{
    long long answer = 0;
    
    if (a < b) answer = Sum(a, b);
    else if (a == b) answer = a;
    else answer = Sum(b, a);
    
    return answer;
}