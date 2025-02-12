#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient)
{
   vector<int> stack;
    int count = 0;

    for (int item : ingredient) {
        stack.push_back(item);

        if (stack.size() >= 4 &&
            stack[stack.size() - 4] == 1 &&
            stack[stack.size() - 3] == 2 &&
            stack[stack.size() - 2] == 3 &&
            stack[stack.size() - 1] == 1) {

            stack.erase(stack.end() - 4, stack.end());
            count++;
        }
    }

    return count;
}