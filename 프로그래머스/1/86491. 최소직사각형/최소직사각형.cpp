#include <string>
#include <vector>

using namespace std;

void sortMaxValueToWidth(vector<vector<int>>& sizes)
{
    for(int i = 0; i < sizes.size(); i++)
    {
        int temp = sizes[i][0];
        if(temp < sizes[i][1])
        {
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }
}

int solution(vector<vector<int>> sizes) {
    
    sortMaxValueToWidth(sizes);
    
    int max_width = 0;
    int max_height = 0;
    
    for(int j = 0; j < sizes.size(); j++)
    {
        if(sizes[j][0] > max_width) max_width = sizes[j][0];
        if(sizes[j][1] > max_height) max_height = sizes[j][1];
    }  
    
    return max_width * max_height;
}