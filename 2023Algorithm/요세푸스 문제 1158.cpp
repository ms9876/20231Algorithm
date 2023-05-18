#include <iostream>
#include <list>
#include <queue>
using namespace std;

#pragma region ť
int n, k;
queue < int> q;

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		q.push(i);
	}
	cout << "<";	
	while (!q.empty())
	{
		for (int i = 0; i < k; i++)
		{
			if (i != k - 1)
				q.push(q.front());
			else if (q.size() > 1)
				cout << q.front() + 1 << ", ";
			else
				cout << q.front() + 1;
			q.pop();
		}
	}
	cout << ">";
}

#pragma endregion


