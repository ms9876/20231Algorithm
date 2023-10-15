#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> arr;
vector<int> vis;
int n, temp1, temp2;

void BFS(int v) {
	queue <int> q;
	q.push(v);

	while (q.empty())
	{
		int a = q.front();
		q.pop();

		for (int i = 0; i < n; i++)
		{
			if (vis[a] == -1 && arr[a][i]) {
				vis[arr[a][i]] = a;
				q.push(arr[a][i]);
			}
		}
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n-1; i++)
	{
		cin >> temp1 >> temp2;
		arr[temp1].push_back(temp2);
		arr[temp2].push_back(temp1);
	}

	BFS(1);
}