#include <string>
#include <vector>

using namespace std;

bool isEventFactor(int num)
{
    int factorCount = 0;
    for (int i = 1; i <= num; i++)
    {
        if(num % i == 0) factorCount++;
    }
    return factorCount % 2 == 0? true : false;
}

int solution(int left, int right) {
    int answer = 0;
    for(left; left <= right; left++)
    {
        if(isEventFactor(left)) {
            answer += left;
        }
        else {
            answer -= left;
        }
    }
    
    return answer;
}