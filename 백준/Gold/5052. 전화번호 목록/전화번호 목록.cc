#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isConsistent(vector<string>& numbers)
{
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i)
    {

        if (numbers[i + 1].find(numbers[i]) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> numbers(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> numbers[i];
        }

        cout << (isConsistent(numbers) ? "YES" : "NO") << '\n';
    }

    return 0;
}