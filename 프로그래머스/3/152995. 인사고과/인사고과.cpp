#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int solution(vector<vector<int>> scores)
{
    int wanhoA = scores[0][0];
    int wanhoB = scores[0][1];
    int wanhoSum = wanhoA + wanhoB;
    
    vector<pair<int, int>> people;
    for (auto& s : scores)
    {
        people.emplace_back(s[0], s[1]);
    }
    
    sort(people.begin(), people.end(), compare);
    
    int maxB = -1;
    int answer = 1;

    for (auto& [a, b] : people)
    {
        if (a == wanhoA && b == wanhoB)
        {
            maxB = max(maxB, b);
            continue;
        }
        
        if (b < maxB) continue;
        maxB = max(maxB, b);

        if (a > wanhoA && b > wanhoB) return -1;

        if (a + b > wanhoSum) answer++;
    }
    return answer;
}