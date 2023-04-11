#include <iostream>
#include <string>
#include <stack>
using namespace std;
// 결과를 위한 스택
stack<int> answer;
// 연산을 위한 스택
stack<char> s1, s2;
string str1, str2;

int main() {
	cin >> str1;
	cin >> str2;
	// 계산을 했을 때 정수로 바꿔줘야 함 (문자니까)

	for (int i = 0; i < str1.size(); i++) {
		s1.push(str1[i]);
	}
	for (int i = 0; i < str2.size(); i++) {
		s2.push(str2[i]);
	}
	int extra = 0; // 올림수

	// 질문 - str2가 더 클 수도 있지 않나? 바꿔주면 되죠오
	if (s1.size() < s2.size())
		swap(s1, s2);

	while (!s1.empty() && !s2.empty()) {
		// 2개를 빼서 더해주기
		int x = s1.top() - '0';
		int y = s2.top() - '0';
		answer.push((x + y + extra) % 10);
		extra = (x + y + extra) / 10;
		s1.pop();
		s2.pop();
	}
	// 비어있다면, 나머지를 처리해야 한다
	// 올림이 존재 o
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
	// 올림 존재 x, 즉 extra == 0;
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