#include <string>
#include <vector>
#include <iostream>
#include <regex>

using namespace std;

int solution(vector<string> babbling)
{
    vector<string> validWords = {"aya", "ye", "woo", "ma"};
    int answer = 0;
    
    for (string word : babbling)
    {
        string temp = word;
        
        if (regex_search(temp, regex("ayaaya|yeye|woowoo|mama"))) continue;
        
        for (string valid : validWords)
        {
            size_t pos;
            while ((pos = temp.find(valid)) != string::npos)
            {
                temp.replace(pos, valid.length(), " ");
            }
        }
        
        if(temp.find_first_not_of(' ') == string::npos)
        {
            answer++;
        }
        
    }
    
    return answer;
}