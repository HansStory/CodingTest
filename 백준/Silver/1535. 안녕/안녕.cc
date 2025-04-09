#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> L(N);
    vector<int> J(N);

    for (int i = 0; i < N; i++) cin >> L[i];
    for (int i = 0; i < N; i++) cin >> J[i];

    vector<int> dp(101, 0);

    for (int i = 0; i < N; i++)
    {
        for (int hp = 100; hp >= L[i] + 1; --hp)
        {
            if (dp[hp - L[i]] + J[i] > dp[hp])
            {
                dp[hp] = dp[hp - L[i]] + J[i];
            }
        }
    }

    int answer = *max_element(dp.begin() + 1, dp.end());

    cout << answer;

    return 0;
}