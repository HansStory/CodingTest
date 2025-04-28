#include <string>
#include <vector>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<vector<int>> dungeons)
{
    int answer = 0;
    int n = dungeons.size();
    vector<int> order(n);

    for (int i = 0; i < n; i++)
    {
        order[i] = i;
    }

    do
    {
        int current_k = k;
        int count = 0;

        for (int idx : order)
        {
            int min_required = dungeons[idx][0];
            int cost = dungeons[idx][1];

            if (current_k >= min_required)
            {
                current_k -= cost;
                count++;
            }
            else
            {
                break;
            }
        }

        answer = max(answer, count);

    } while (next_permutation(order.begin(), order.end()));

    return answer;
}