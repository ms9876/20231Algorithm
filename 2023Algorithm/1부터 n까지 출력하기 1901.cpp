#include <iostream>
using namespace std;

int s;
void f(int x) {
	// ���� ������ ������ �ʿ��� (���� �߿�)
	if (x > s) {
		return;
	}
	cout << x << endl;
	f(x + 1); // �����ϴ°� ����� ��⤺
}

int main() {
	cin >> s;
	f(1);
}