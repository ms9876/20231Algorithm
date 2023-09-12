#include <iostream>
#include <vector>

using namespace std;

#define MAX_VTXS 51

int testcase;
int board[MAX_VTXS][MAX_VTXS];
bool visited[MAX_VTXS][MAX_VTXS];
int row, col, num, x, y;

int dy[] = { -1, 1, 0, 0 };
int dx[] = { 0, 0, -1, 1 };

void DFS(int y, int x) {
    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= col || nx < 0 || nx >= row)
            continue; 

        if (board[ny][nx] && !visited[ny][nx]) {
            DFS(ny, nx);
        }
    }
    return;
}

int main() {
    cin >> testcase;

    while (testcase--) {
        fill_n(board[0], 51 * 51, 0);
        fill_n(visited[0], 51 * 51, 0);

        int cnt = 0;

        cin >> row >> col >> num;
        for (int i = 0; i < num; i++) {
            cin >> x >> y;
            board[y][x] = 1;
        }

        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                if (board[i][j] && !visited[i][j]) { 
                    DFS(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }
}
