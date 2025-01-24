#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Rank(int sameCount)
{
    int returnValue = 6;
    switch(sameCount)
    {
        case 2:
            returnValue = 5;
            break;
        case 3:
            returnValue = 4;
            break;
        case 4:
            returnValue = 3;
            break;
        case 5:
            returnValue = 2;
            break;
        case 6:
            returnValue = 1;
            break;     
        case 0:
        case 1:
        default:
            returnValue = 6;
            break;
    }
    
    return returnValue;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    int unknownNumCount = 0;
    int sameNumCount = 0;
    
    for (int num : lottos)
    {
        if(num == 0)
        {
            unknownNumCount++;
        }
        else
        {
            auto it = find(win_nums.begin(), win_nums.end(), num);
            if(it != win_nums.end())
            {
                sameNumCount++;
            }
        }
    }
    
    vector<int> answer;
    answer.push_back(Rank(sameNumCount + unknownNumCount));
    answer.push_back(Rank(sameNumCount));
    
    return answer;
}