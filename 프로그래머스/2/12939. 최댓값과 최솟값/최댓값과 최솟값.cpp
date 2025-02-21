#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;

string solution(string s)
{
    stringstream ss(s);
    int num, minVal = numeric_limits<int>::max(), maxVal = numeric_limits<int>::min();

    while (ss >> num) {
        minVal = min(minVal, num);
        maxVal = max(maxVal, num);
    }

    return to_string(minVal) + " " + to_string(maxVal);
}