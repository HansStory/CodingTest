#include <string>
#include <vector>

using namespace std;

double GetAverage(vector<int> arr)
{
    int&& size = arr.size();
    double sum(0);
    
    for(int num : arr)
    {
        sum += num;
    }
    
    return sum / size;
}

double solution(vector<int> arr) {
    return GetAverage(arr);
}