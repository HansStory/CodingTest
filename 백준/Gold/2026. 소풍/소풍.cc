#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int K, N, F;
vector<vector<bool>> isFriend;
vector<int> group;
bool found = false;

void DFS(int start, int depth)
{
    if (found) return;
    if (depth == K)
    {
        for (int x : group)
        {
            cout << x << '\n';
        }
        found = true;
        return;
    }

    for (int i = start; i <= N; ++i)
    {
        bool canAdd = true;
        for (int member : group)
        {
            if (!isFriend[i][member])
            {
                canAdd = false;
                break;
            }
        }
        if (canAdd)
        {
            group.push_back(i);
            DFS(i + 1, depth + 1);
            group.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> K >> N >> F;
    isFriend.assign(N + 1, vector<bool>(N + 1, false));

    for (int i = 0; i < F; ++i) {
        int a, b;
        cin >> a >> b;
        isFriend[a][b] = true;
        isFriend[b][a] = true;
    }

    DFS(1, 0);
    if (!found) cout << -1 << '\n';

    return 0;
}