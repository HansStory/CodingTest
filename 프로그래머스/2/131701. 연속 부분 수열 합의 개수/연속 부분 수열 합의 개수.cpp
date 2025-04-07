#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements)
{
    unordered_set<int> sumSet;
    int n = elements.size();
    vector<int> extended(elements.begin(), elements.end());
    extended.insert(extended.end(), elements.begin(), elements.end());
    
    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < i + len; j++)
            {
                sum += extended[j];
            }
            sumSet.insert(sum);
        }
    }
    
    return sumSet.size();
}