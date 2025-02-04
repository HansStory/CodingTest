#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string solution(string X, string Y)
{
    string answer = "";
    unordered_map<char, int> countX, countY;
    
    for (char c : X) countX[c]++;
    for (char c : Y) countY[c]++;
    
    vector<char> commonNumbers;
    
    for (char digit = '0'; digit <= '9'; digit++)
    {
        int commonCount = min(countX[digit], countY[digit]);
        for (int i = 0; i < commonCount; i++) {
            commonNumbers.push_back(digit);
        }
    }
    
    if (commonNumbers.empty()) return "-1";
    
    sort(commonNumbers.rbegin(), commonNumbers.rend());  
    if (commonNumbers[0] == '0') return "0";
    
    answer = string(commonNumbers.begin(), commonNumbers.end());
    return answer;
}