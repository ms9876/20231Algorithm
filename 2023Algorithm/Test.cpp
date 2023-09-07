#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m, k, x; // 도시의 수, 도로의 수, 거리, 시작 도시
    int n1, n2;

    cin >> n >> m >> k >> x;

    vector<vector<int>> adj;
    vector<int> visited;

    adj.resize(n + 1, vector<int>(n + 1));
    visited.resize(n + 1, -1); // visited 벡터를 -1로 초기화

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
            if (visited[next] == -1) { // 아직 방문하지 않은 도시인 경우
                visited[next] = visited[now] + 1;
                if (visited[next] == k) {
                    // 원하는 작업 수행
                }
                q.push(next);
            }
        }
    }

    // 원하는 결과를 처리

    return 0;
}
