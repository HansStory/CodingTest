#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int maxNum = 45;
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
        
    return maxNum - sum;
}