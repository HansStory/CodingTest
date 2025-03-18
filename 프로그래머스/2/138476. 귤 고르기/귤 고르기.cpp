#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine)
{
    unordered_map<int, int> countMap;
    
    for (int t : tangerine) countMap[t]++;
    
    vector<int> counts;
    for (auto& entry : countMap)
    {
        counts.push_back(entry.second);
    }
    
    sort(counts.rbegin(), counts.rend());
    
    int total = 0;
    int answer = 0;
    
    for(int count: counts)
    {
        total += count;
        answer++;
        if(total >= k) break;
    }
    
    return answer;
}