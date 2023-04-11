#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> s;
string str;
int sn, result;
int main() {
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		// 숫자
		if (str[i] > '0' && str[i] <= '9') {
			sn = (sn * 10) + (str[i] - '0');
		}
		// 공백
		else if (str[i] == ' ') {
			if (sn != 0) {
				s.push(sn);
				sn = 0;
			}
			
		}
		// 연산자
		else {
			int x = s.top();
			s.pop();
			int y = s.top();
			s.pop();

			if (str[i] == '+')
				s.push(x + y);
			else if (str[i] == '-')
				s.push(y - x);
			else if (str[i] == '*')
				s.push(x * y);
			
		}
	}
	cout << s.top();
}