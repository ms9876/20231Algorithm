#include <iostream>
#include <queue>

using namespace std;

string arr[101]; // �̷� ������ ������ �迭
int n, m; // �̷��� ũ�� (��, ��)
int visited[101][101]; // �湮 ���ο� �ִ� �Ÿ�
queue<pair<int, int>> q; // BFS�� ���� ť
int dx[] = { 1, 0, -1, 0 }; // x ����
int dy[] = { 0, 1, 0, -1 }; // y ����

void BFS(int x, int y) {
    q.push({ x, y }); // ���� ������ ť�� �ֱ�
    visited[x][y] = 1; // ���� ������ �湮�ߴٰ� ǥ��

    while (!q.empty()) { 
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) { // ������� üũ����� �Ǵϱ� 4�� 
            int ny = y + dy[i]; // ���� �̵��� ��ġ�� y ��ǥ
            int nx = x + dx[i]; // ���� �̵��� ��ġ�� x ��ǥ

            // �̷� ���� ����ó��
            if (nx >= n || ny >= m) continue;
            if (nx < 0 || ny < 0) continue;

            if (arr[nx][ny] == '1' && visited[nx][ny] == 0) { // ���� �湮���� �ʾҴٸ�
                q.push({ nx, ny }); // ���� ��ġ�� ť�� �ֱ�
                visited[nx][ny] = visited[x][y] + 1; // �Ÿ� ����
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    BFS(0, 0);

    cout << visited[n - 1][m - 1]; // �ִ� �Ÿ� ���
}
