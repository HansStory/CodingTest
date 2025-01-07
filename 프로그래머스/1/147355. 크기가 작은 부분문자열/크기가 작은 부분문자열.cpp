#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int t_length = t.length();
    int p_length = p.length();
    long long p_value = stoll(p);
    
    for (int i = 0; i <= t_length - p_length; i++)
    {
        string sub = t.substr(i, p_length);
        long long sub_value = stoll(sub);
        
        if(sub_value <= p_value) answer++;
    }  
    
    return answer;
}