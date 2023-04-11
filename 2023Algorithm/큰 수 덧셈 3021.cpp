#include <iostream>
#include <string>
#include <stack>
using namespace std;
// ����� ���� ����
stack<int> answer;
// ������ ���� ����
stack<char> s1, s2;
string str1, str2;

int main() {
	cin >> str1;
	cin >> str2;
	// ����� ���� �� ������ �ٲ���� �� (���ڴϱ�)

	for (int i = 0; i < str1.size(); i++) {
		s1.push(str1[i]);
	}
	for (int i = 0; i < str2.size(); i++) {
		s2.push(str2[i]);
	}
	int extra = 0; // �ø���

	// ���� - str2�� �� Ŭ ���� ���� �ʳ�? �ٲ��ָ� ���ҿ�
	if (s1.size() < s2.size())
		swap(s1, s2);

	while (!s1.empty() && !s2.empty()) {
		// 2���� ���� �����ֱ�
		int x = s1.top() - '0';
		int y = s2.top() - '0';
		answer.push((x + y + extra) % 10);
		extra = (x + y + extra) / 10;
		s1.pop();
		s2.pop();
	}
	// ����ִٸ�, �������� ó���ؾ� �Ѵ�
	// �ø��� ���� o
	if (extra != 0) {
		if (s1.empty()) {
			answer.push(extra);
			extra = 0;
		}
		else {
			while (!s1.empty()) {
				int x = s1.top() - '0';
				answer.push((x + extra) % 10);
				extra = (x + extra) / 10;
				s1.pop();
			}
		}
	}
	// �ø� ���� x, �� extra == 0;
	else {
		while (!s1.empty()) {
			int x = s1.top() - '0';
			answer.push((x + extra) % 10);
			extra = (x + extra) / 10;
			s1.pop();
		}
	}

	if (extra != 0) {
		answer.push(extra);
	}

	while (!answer.empty()) {
		cout << answer.top();
		answer.pop();
	}
	
}