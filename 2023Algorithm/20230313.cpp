#include <iostream>
using namespace std;

int main() {
#pragma region ���� ū ��� 1289
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

#pragma region ��� ����� 1290
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

#pragma region �� �� �ʷ� ��ȯ 1703
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

	// ������ �ڵ�
	int sec;
	cin >> sec;
	cout << sec / 3600 << " " << sec % 3600 / 60 << " " <<
		sec % 3600 % 60; 
#pragma endregion

#pragma region ���� �ڸ��� 1677
	int n, m; // ���� n, ���� m
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

#pragma region ������� ����� 1679
	int n, a, b, c, cnt = 0;
	cin >> n;

	for (int a = 1; a <= n; a++) {
		for (int b = a; b <= n; b++) { // a���� �����ϴ� - ���� �տ��� �ɷ��༭
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