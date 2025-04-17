#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) 
{
    unordered_map<string, int> count;

    for (const auto& c : clothes)
    {
        count[c[1]]++;
    }

    int answer = 1;
    for (const auto& entry : count)
    {
        answer *= (entry.second + 1);
    }

    return answer - 1;
}