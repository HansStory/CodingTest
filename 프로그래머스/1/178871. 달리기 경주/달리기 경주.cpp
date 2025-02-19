#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{
    unordered_map<string, int> rank_map;
    
    for (int i = 0; i < players.size(); i++)
    {
        rank_map[players[i]] = i;
    }
    
     for (const string& name : callings)
     {
        int cur_rank = rank_map[name];
        if (cur_rank == 0) continue;

        int prev_rank = cur_rank - 1;
        string prev_name = players[prev_rank];

        swap(players[cur_rank], players[prev_rank]);

        rank_map[name] = prev_rank;
        rank_map[prev_name] = cur_rank;
    }
       
    return players;
}