#include <iostream>
#include <queue>

using namespace std;

string arr[101]; // 미로 정보를 저장할 배열
int n, m; // 미로의 크기 (행, 열)
int visited[101][101]; // 방문 여부와 최단 거리
queue<pair<int, int>> q; // BFS를 위한 큐
int dx[] = { 1, 0, -1, 0 }; // x 방향
int dy[] = { 0, 1, 0, -1 }; // y 방향

void BFS(int x, int y) {
    q.push({ x, y }); // 시작 지점을 큐에 넣기
    visited[x][y] = 1; // 시작 지점을 방문했다고 표시

    while (!q.empty()) { 
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) { // 사방향을 체크해줘야 되니까 4번 
            int ny = y + dy[i]; // 다음 이동할 위치의 y 좌표
            int nx = x + dx[i]; // 다음 이동할 위치의 x 좌표

            // 미로 범위 예외처리
            if (nx >= n || ny >= m) continue;
            if (nx < 0 || ny < 0) continue;

            if (arr[nx][ny] == '1' && visited[nx][ny] == 0) { // 아직 방문하지 않았다면
                q.push({ nx, ny }); // 다음 위치를 큐에 넣기
                visited[nx][ny] = visited[x][y] + 1; // 거리 갱신
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    BFS(0, 0);

    cout << visited[n - 1][m - 1]; // 최단 거리 출력
}
