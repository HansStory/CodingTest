#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    //vector<int> answer;
    
    if(arr.size() == 1)
    {
        arr[0] = -1;
        return arr;
    }
    else
    {
        int minIdx = 0;
        int minIdxValue = arr[0];
        for(int i = 0; i < arr.size(); i ++)
        {
            if(arr[i] < minIdxValue)
            {
                minIdx = i;
                minIdxValue = arr[i];
            }
        }
    
        arr.erase(arr.begin() + minIdx); 

        return arr;
    }    
}