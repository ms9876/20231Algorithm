#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n * 2; i++) {
		for (int j = 1; j <= n * 2; j++) {
			if (i + j == n + 1) // ���� ���
				cout << "*";
			else if (i + j == n + 2 * i)  // ������ ���   i - 5 == j�� �� ��
				cout << "*";
			else if (i + j == n + 2 * j) // ���� �ϴ�
				cout << "*";
			else if (i + j == 3 * n + 1) // ������ �ϴ�
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}