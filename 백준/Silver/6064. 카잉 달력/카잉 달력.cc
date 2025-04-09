#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int GetYear(int M, int N, int x, int y)
{
    int lastYear = lcm(M, N);
    int year = x;
    while (year <= lastYear)
    {
        int currentY = (year - 1) % N + 1;
        
        if (currentY == y)
        {
           return year; 
        }
        
        year += M;
    }
    
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int M, N, x, y;
        cin >> M >> N >> x >> y;
        cout << GetYear(M, N, x, y) << "\n";
    }

    return 0;
}