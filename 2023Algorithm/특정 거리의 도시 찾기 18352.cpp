#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int n, m, k, x;
	vector<int>visited;
	vector<int> answer;
	vector<vector<int>> adj;

	cin >> n >> m >> k >> x;

	adj.resize(n + 1);
	visited.resize(n + 1, -1);

	int n1, n2;
	
	for (int i = 0; i < m; i++)
	{
		cin >> n1 >> n2;
		adj[n1].push_back(n2);
	}

	queue < int> q;	
	q.push(x);
	visited[x] = 0;

	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		for (int i = 0; i < adj[now].size(); i++)
		{
			int next = adj[now][i];
			if (visited[next] == -1) {
				q.push(next);
				visited[adj[now][i]] = visited[now] + 1;

				if (visited[adj[now][i]] == k)
					answer.push_back(next);
			}
		}
	}
	sort(answer.begin(), answer.end());

	if (answer.empty())
		cout << -1;
	else {
		for (auto n : answer)
			cout << n << '\n';
	}
}