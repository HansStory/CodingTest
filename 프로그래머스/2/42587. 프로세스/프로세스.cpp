#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location)
{
    queue<pair<int, int>> q;
    int order = 0;

    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({i, priorities[i]});
    }

    while (!q.empty())
    {
        auto current = q.front();
        q.pop();

        bool hasHigher = false;
        queue<pair<int, int>> temp = q;
        while (!temp.empty())
        {
            if (temp.front().second > current.second)
            {
                hasHigher = true;
                break;
            }
            temp.pop();
        }

        if (hasHigher)
        {
            q.push(current);
        }
        else
        {
            order++;
            if (current.first == location)
            {
                return order;
            }
        }
    }

    return -1;
}