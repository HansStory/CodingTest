#include <string>
#include <vector>

using namespace std;

int solution(string message) 
{
    auto messageLength = message.length();
    int answer = messageLength * 2;
    return answer;
}