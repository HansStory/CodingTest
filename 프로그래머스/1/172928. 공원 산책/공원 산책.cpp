#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {-1, 1, 0, 0};
const char direction[4] = {'N', 'S', 'W', 'E'};

vector<int> solution(vector<string> park, vector<string> routes)
{    
    // 공원의 가로 세로 길이
    int width = park[0].size();
    int height = park.size();
    
    // 현재 위치
    int posX, posY;
    
    // 시작 위치 찾기
    for (int i = 0; i < height; i ++)
    {
        for (int j = 0; j < width; j ++)
        {
            if (park[i][j] == 'S')
            {
                posX = j;
                posY = i;
            }
        }
    }
    
    //cout << "Current Pos : " << posX << ", " << posY << endl;
    
    for (const string& rout : routes)
    {
        stringstream ss(rout);
        char dir;
        int dist;
        
        ss >> dir >> dist;       
        //cout << "Direction : " << dir << ", Dist : " << dist << endl;
        
        // 이동 방향 찾기
        int dirIdx = -1;
        for (int i = 0; i < 4; i++)
        {
            if (direction[i] == dir)
            {
                dirIdx = i;
                break;
            }
        }
        
        //cout << "Direction Idx : " << dirIdx << endl;
        
        int nx = posX, ny = posY;
        bool canMove = true;
        
        for (int i = 0; i < dist; i ++)
        {
            nx += dx[dirIdx];
            ny += dy[dirIdx];
            
            if (nx < 0 || nx >= width || ny < 0 || ny >= height 
                || park[ny][nx] == 'X')
            {
                canMove = false;
                break;
            }
        }
        
        if (canMove)
        {
            posX = nx;
            posY = ny;
        }
        
    }
    
    return {posY, posX};
}