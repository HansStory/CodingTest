#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int num)
{
    if(num < 2) return false;
    
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int solution(vector<int> nums)
{
    int answer = 0;
    int numSize = nums.size();
    
    for(int i = 0; i < numSize; i++)
    {
        for(int j = i+1; j < numSize; j++)
        {
            for(int k = j+1; k < numSize; k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(IsPrime(sum))
                {
                    answer++;
                }
            }
        }        
    }

    return answer;
}