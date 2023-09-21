#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, k, a, b;
vector<vector<int>> arr;
int visited[1001];
queue<int> q;

void DFS(int v) {

    visited[v] = 1;

    for (int i = 0; i < arr[v].size(); ++i) {

        if (visited[arr[v][i]] == 0) {

            cout << " " << arr[v][i];
            DFS(arr[v][i]);
        }
    }
}

void BFS(int v) {

    visited[v] = 1;
    q.push(v);

    while (!q.empty()) {

        int now = q.front();
        q.pop();

        for (int i = 0; i < arr[now].size(); ++i) {

            if (visited[arr[now][i]] == 0) {

                cout << " " << arr[now][i];
                q.push(arr[now][i]);
                visited[arr[now][i]] = 1;
            }
        }
    }
}

int main() {
    //https://www.acmicpc.net/problem/1260

    cin >> n >> m >> k;
    arr.resize(m + 1);

    for (int i = 0; i < m; ++i) {

        cin >> a >> b;
        arr[a].push_back(b);
    }

    cout << k;
    DFS(k);

    cout << endl;
    fill_n(visited, 1001, 0);

    cout << k;
    BFS(k);
}