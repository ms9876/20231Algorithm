#include <iostream>

using namespace std;

int main() {
	int a, b, c; // ���� ���, ���� ���, �Ǹ� �ݾ�

	cin >> a >> b >> c;

	if (b >= c) // ���� ����� �Ǹ� �ݾ׺��� ũ�ų� ������ 
		cout << -1; // ������ �����ϱ� -1
	else
		cout << a / (c - b) + 1; // ���ͺб��� ���ϴ� ���
}