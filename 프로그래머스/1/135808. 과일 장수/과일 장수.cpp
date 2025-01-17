#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score)
{
    sort(score.rbegin(), score.rend());
    int answer = 0;
    
    for(size_t i = 0; i + m <= score.size(); i += m)
    {
        int boxMinScore = score[i + m - 1];
        answer += boxMinScore * m;
    }
    
    return answer;
}