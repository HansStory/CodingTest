#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    vector<int> real_lost, real_reserve;
    for (int l : lost)
    {
        if (find(reserve.begin(), reserve.end(), l) != reserve.end())
        {
            reserve.erase(find(reserve.begin(), reserve.end(), l));
        }
        else 
        {
            real_lost.push_back(l);
        }
    }
    
    for (auto it = real_lost.begin(); it != real_lost.end();)
    {
        int student = *it;
        auto front = find(reserve.begin(), reserve.end(), student - 1);
        auto back = find(reserve.begin(), reserve.end(), student + 1);

        if (front != reserve.end())
        {
            reserve.erase(front);
            it = real_lost.erase(it);
        }
        else if (back != reserve.end())
        {
            reserve.erase(back);
            it = real_lost.erase(it);
        }
        else
        {
            ++it;
        }
    }
    
    answer = n - real_lost.size();
    
    return answer;
}