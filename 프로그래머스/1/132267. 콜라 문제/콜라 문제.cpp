#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
    int answer = 0;
    
    while(n >= a)
    {
        int remain = n%a;
        int quotient = n/a;
        n = quotient * b + remain;
        
        answer += quotient * b;
    }
    
    return answer;
}