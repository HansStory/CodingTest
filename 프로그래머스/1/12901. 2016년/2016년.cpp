#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
    vector<int> daysInMonth = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> daysOfWeek = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int totalDays(0);
    
    for (int i = 0; i < a-1; i++)
    {
        totalDays += daysInMonth[i];
    }
    
    totalDays += b;

    return daysOfWeek[(totalDays - 1) % 7];
}