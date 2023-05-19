#include <iostream>
#include <list>
#include <queue>
using namespace std;

#pragma region 큐
//int n, k;
//queue < int> q;
//
//int main() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		q.push(i);
//	}
//	cout << "<";	
//	while (!q.empty())
//	{
//		for (int i = 0; i < k; i++)
//		{
//			if (i != k - 1)
//				q.push(q.front());
//			else if (q.size() > 1)
//				cout << q.front() + 1 << ", ";
//			else
//				cout << q.front() + 1;
//			q.pop();
//		}
//	}
//	cout << ">";
//}
#pragma endregion

#pragma region 연결리스트
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;

	cin >> n >> k;

	list<int> circleList;
	for (int i = 0; i < n; i++)
	{
		circleList.push_back(i);
	}
	list<int>::iterator target = circleList.begin();

	cout << "<";
	while (n > 0)
	{
		for (int i = 0; i < k; i++)
		{
			target++;
		}
		if (n == 1) {
			cout << *target;
			break;
		}	
		cout << *target << ", ";
		n--;	
		target = circleList.erase(target);
	}
	cout << ">";
}
#pragma endregion