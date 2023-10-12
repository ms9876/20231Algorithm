#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> n;
string str;
int sn;
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
				n.push(sn);
				sn = 0;
			}
			
		}
		// 연산자
		else {
			int x = n.top();
			n.pop();
			int y = n.top();
			n.pop();

			if (str[i] == '+')
				n.push(x + y);
			else if (str[i] == '-')
				n.push(y - x);
			else if (str[i] == '*')
				n.push(x * y);
			
		}
	}
	cout << n.top();
}