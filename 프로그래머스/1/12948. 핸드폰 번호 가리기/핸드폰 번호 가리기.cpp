#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int hideIndex = phone_number.length() - 4;
    phone_number.replace(0, hideIndex, hideIndex, '*');
    return phone_number;
}