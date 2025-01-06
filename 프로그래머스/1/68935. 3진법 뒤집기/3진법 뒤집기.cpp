#include <string>
#include <vector>

using namespace std;

vector<int> intToReverseTrit(int n)
{
    vector<int> returnValue;
    while(n != 0)
    {
        returnValue.push_back(n % 3);
        n /= 3;
    }
    
    return returnValue;
}

int solution(int n) {
    int answer = 0;
    vector<int> reverseTrit = intToReverseTrit(n);
    int size = reverseTrit.size();
    
    for(int i = 0; i < size; i++)
    {
        int v = 1;
        for(int j = 0; j < size -i -1; j ++)
        {
            v *= 3;
        }
        
        answer += reverseTrit[i] * v;
        
    }
    return answer;
}