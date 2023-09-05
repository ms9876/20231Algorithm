#include<vector>
#include <queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;

    int col = maps.size(); // 세로
    int row = maps[0].size(); // 가로

    int dx[] = { 1, -1, 0, 0 };
    int dy[] = { 0, 0, -1, 1 };
    // 오 왼 위 아래

    vector<vector<int>> visited;
    visited.resize(col, vector<int>(row, -1));

    queue<pair<int, int>> q;

    visited[0][0] = 1;
    q.push({ 0, 0 });

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i) {

            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= col || ny >= row || nx < 0 || ny < 0)
                continue;

            if (maps[nx][ny] == 1 && visited[nx][ny] == -1) {

                q.push({ nx, ny });
                visited[nx][ny] = visited[x][y] + 1;
            }
        }
    }

    answer = visited[col - 1][row - 1];
    return answer;
}