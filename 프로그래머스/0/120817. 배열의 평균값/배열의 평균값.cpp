#include <string>
#include <vector>

using namespace std;

double GetAverage(vector<int> numbers)
{
	double&& size = numbers.size();
	double sum(0);
	for (int number : numbers)
	{
		sum += number;
	}

	return size != 0? sum / size : 0;
}

double solution(vector<int> numbers) 
{
    return GetAverage(numbers);
}