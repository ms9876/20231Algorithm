#include <iostream>

using namespace std;

int main() {
	int n, m; // �õ�� ����, �г�

	cin >> n >> m; 

	if (m == 1 || m == 2) // 1�г� 2�г�
		cout << "NEWBIE!";
	else if (m <= n) // ���� �ƴϸ鼭 n�г� ����
		cout << "OLDBIE!";
	else 
		cout << "TLE!";
}