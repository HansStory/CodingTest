#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets)
{
    unordered_map<char, int> minPress;
    
    for (const string& keys : keymap)
    {
        for (int i = 0; i < keys.size(); i++)
        {
            char c= keys[i];
            if (minPress.find(c) == minPress.end() || minPress[c] > i + 1)
            {
                minPress[c] = i + 1;
            }
        }
    }
    
    vector<int> answer;
    
    for (const string& target : targets)
    {
        int totalPress = 0;
        
        for (char c : target)
        {
            if (minPress.find(c) == minPress.end())
            {
                totalPress = -1;
                break;
            }
            totalPress += minPress[c];
        }
        
        answer.push_back(totalPress);
    }
      
    return answer;
}