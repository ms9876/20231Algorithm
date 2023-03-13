#include <iostream>
using namespace std;

int main() {
#pragma region 가장 큰 운동장 1289
	int width, width1, width2;
	int length, length1, length2;

	cin >> width >> length;
	cin >> width1 >> length1;
	cin >> width2 >> length2;

	int a = width * length;
	int b = width1 * length1;
	int c = width2 * length2;

	int max = 0;

	if (max < a) {
		max = a;
	}
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}

	cout << max;
#pragma endregion

#pragma region 대금 만들기 1290
	int n, cnt = 0;
	cin >> n;

	//for(int i = 1; i <= n / 2; i++) 
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0) {
			cnt++;
		}
	}

	cout << cnt;
#pragma endregion

#pragma region 시 분 초로 변환 1703
	int n, a = 0, b = 0, c = 0;

	cin >> n;

	if (n >= 60) {
		b = n / 60;
		c = n % 60;

		if (b >= 60) {
			a = b / 60;
			b = b % 60;
		}
	}
	else if (n < 60) {
		c = n;
	}
	cout << a << " " << b << " " << c;

	// 선생님 코드
	int sec;
	cin >> sec;
	cout << sec / 3600 << " " << sec % 3600 / 60 << " " <<
		sec % 3600 % 60; 
#pragma endregion

#pragma region 종이 자르기 1677
	int n, m; // 가로 n, 세로 m
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == m - 1) {
				if (j == 0 || j == n - 1) {
					cout << "+";
				}
				else {
					cout << "-";
				}
			}
			else if (j == 0 || j == n - 1) {
				cout << "|";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
#pragma endregion

#pragma region 세모바퀴 만들기 1679
	int n, a, b, c, cnt = 0;
	cin >> n;

	for (int a = 1; a <= n; a++) {
		for (int b = a; b <= n; b++) { // a부터 시작하는 - 이유 앞에서 걸러줘서
			c = n - (a + b);
			if (a + b > c && c >= b) {
				cnt++;
				cout << a << " " << b << " " << c << endl;
			}
		}
	}
	if (cnt == 0)
		cout << "-1";
#pragma endregion
}