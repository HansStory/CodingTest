#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) 
{
    double divisionValue = (double)num1 / (double)num2;
    return (int)(divisionValue * 1000);
}