#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

int DateToDays(const string &date)
{
    int year, month, day;
    sscanf(date.c_str(), "%d.%d.%d", &year, &month, &day);
    return (year * 12 * 28) + (month * 28) + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies)
{
    vector<int> answer;
    unordered_map<char, int> termMap;
    int todayDays = DateToDays(today);
    
    for (const string& term : terms)
    {
        stringstream ss(term);
        char type;
        int duration;
        
        ss >> type >> duration;
        termMap[type] = duration * 28;
    }
    
    for (int i = 0; i < privacies.size(); ++i)
    {
        stringstream ss(privacies[i]);
        string date;
        char type;
        ss >> date >> type;
        
        int expiryDate = DateToDays(date) + termMap[type] - 1;
        if (expiryDate < todayDays)
        {
            answer.push_back(i + 1);
        }
    }
     
    return answer;
}