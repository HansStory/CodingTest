#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
    unordered_map<string, unordered_set<string>> report_map;
    unordered_map<string, int> report_count;
    unordered_map<string, int> mail_count;
    
    for (const string& r : report)
    {
        int space_idx = r.find(' ');
        string reporter = r.substr(0, space_idx);
        string reported = r.substr(space_idx + 1);
        
        if (report_map[reporter].insert(reported).second)
        { 
            report_count[reported]++;
        }
    }
    
    unordered_set<string> banned_users;
    for (const auto& entry : report_count)
    {
        if (entry.second >= k)
        {
            banned_users.insert(entry.first);
        }
    }
    
    for (const auto& entry : report_map)
    {
        for (const string& reported : entry.second)
        {
            if (banned_users.count(reported))
            {
                mail_count[entry.first]++;
            }
        }
    }
    
    vector<int> answer;
    for (const string& id : id_list)
    {
        answer.push_back(mail_count[id]);
    }
    
    return answer;
}