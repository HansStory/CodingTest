#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices)
{
    string answer = "";
    
    unordered_map<char, int> scores = {
        {'R', 0}, {'T', 0}, {'C', 0}, {'F', 0},
        {'J', 0}, {'M', 0}, {'A', 0}, {'N', 0}
    };
    
    for (size_t i = 0; i < survey.size(); i++)
    {
        char disagree = survey[i][0];
        char agree = survey[i][1];
        int choice = choices[i];

        int score = abs(choice - 4);

        if (choice < 4)
        {
            scores[disagree] += score;
        }
        else if (choice > 4)
        {
            scores[agree] += score;
        }
    }

    vector<pair<char, char>> types = { {'R', 'T'}, {'C', 'F'}, {'J', 'M'}, {'A', 'N'} };

    for (auto pair : types)
    {
        char first = pair.first, second = pair.second;
        if (scores[first] >= scores[second])
        {
            answer += first;
        }
        else
        {
            answer += second;
        }
    }
    
    return answer;
}