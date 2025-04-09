#include <iostream>
#include <vector>

using namespace std;


int main()
{
    string s;
    cin >> s;

    vector<int> counts(26, 0);

    for (char c : s)
    {
        counts[c - 'a']++;
    }

    for (int count : counts)
    {
        cout << count << " ";
    }

    return 0;
}