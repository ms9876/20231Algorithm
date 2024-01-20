#include <iostream>
#include <deque>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, input, now, nowNum = 1;
	deque<int> deque;
	set<int> set;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		deque.push_back(input);		// ������� ����
		set.insert(i + 1);
	}

	now = deque.front();
	deque.pop_front();
	cout << nowNum << " ";
	set.erase(1);

	while (!deque.empty()) {		// ������� ������

		for (int i = 0; i < abs(now) - 1; i++)		// ���밪.
		{
			if (now > 0) {		// ����� �տ��� ���� �ڿ� �־���.
				deque.push_back(deque.front());
				deque.pop_front();
				nowNum++;
				while (set.find(nowNum) == set.end())
				{
					nowNum++;
					if (nowNum > n) nowNum -= n;
				}
			}
			else {		
				deque.push_front(deque.back());
				deque.pop_back();
				nowNum--;
				while (set.find(nowNum) == set.end())
				{
					nowNum--;
					if (nowNum <= 0) nowNum = n;
				}
			}
		}

		if (now > 0) {		
			now = deque.front();
			deque.pop_front();
			nowNum++;
			while (set.find(nowNum) == set.end())
			{
				nowNum++;
				if (nowNum > n) nowNum -= n;
			}
			cout << nowNum << " ";
			set.erase(nowNum);
		}
		else {
			now = deque.back();
			deque.pop_back();
			nowNum--;
			while (set.find(nowNum) == set.end())
			{
				nowNum--;
				if (nowNum <= 0) nowNum = n;
			}
			cout << nowNum << " ";
			set.erase(nowNum);
		}
	}
}