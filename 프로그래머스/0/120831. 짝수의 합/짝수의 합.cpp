#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int sum = 0;
    
    if(n%2 != 0) n--;
    while(n > 0)
    {
        sum += n;
        n = n-2;
    }
    
    return sum;
}