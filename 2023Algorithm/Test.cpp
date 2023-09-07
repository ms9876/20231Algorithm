#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m, k, x; // ������ ��, ������ ��, �Ÿ�, ���� ����
    int n1, n2;

    cin >> n >> m >> k >> x;

    vector<vector<int>> adj;
    vector<int> visited;

    adj.resize(n + 1, vector<int>(n + 1));
    visited.resize(n + 1, -1); // visited ���͸� -1�� �ʱ�ȭ

    for (int i = 0; i < m; i++) {
        cin >> n1 >> n2;
        adj[n1].push_back(n2);
    }

    queue<int> q;
    q.push(x);

    while (!q.empty()) {
        int now = q.front();
        q.pop();

        for (int i = 0; i < adj[now].size(); i++) {
            int next = adj[now][i];
            if (visited[next] == -1) { // ���� �湮���� ���� ������ ���
                visited[next] = visited[now] + 1;
                if (visited[next] == k) {
                    // ���ϴ� �۾� ����
                }
                q.push(next);
            }
        }
    }

    // ���ϴ� ����� ó��

    return 0;
}
