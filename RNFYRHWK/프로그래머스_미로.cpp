#include<vector>
#include<map>
#include<queue>

using namespace std;

int solution(vector<vector<int>> maps)
{
    
    vector<vector<int>> visMap(maps.size(), vector<int>(maps.front().size(), -1));
    queue<pair<int, int>> mapQ;
    int my = maps.size() - 1, mx = maps[0].size() - 1;

    if (my != 0 && mx != 0) {

        if (maps[my - 1][mx] == 0 && maps[my][mx - 1] == 0) return -1;

    }

    int dx[] = { 0, 1, 0, -1 };
    int dy[] = { -1, 0, 1, 0 };

    bool loop = true;

    mapQ.push({ 0, 0 });

    while (!mapQ.empty())
    {

        auto cur = mapQ.front();
        mapQ.pop();

        for (int i = 0; i < 4; i++) {

            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if (nx < 0 || ny < 0 || nx > mx || ny > my) continue;

            if (maps[ny][nx] != 0 && visMap[ny][nx] == -1) {

                if (nx == mx && ny == my) {

                    return visMap[cur.second][cur.first] + 3;

                }

                visMap[ny][nx] = visMap[cur.second][cur.first] + 1;
                mapQ.push({ nx, ny });

            }

        }

    }

    return -1;

}