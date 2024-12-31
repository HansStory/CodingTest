#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int length = s.length();
    int halfLength = length / 2;
    return length % 2 == 0 ? s.substr(halfLength - 1, 2) : string(1, s[halfLength]);
}