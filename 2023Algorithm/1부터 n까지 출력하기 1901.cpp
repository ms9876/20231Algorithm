#include <iostream>
using namespace std;

int n;
void f(int x) {
	// ���� ������ ������ �ʿ��� (���� �߿�)
	if (x > n) {
		return;
	}
	cout << x << endl;
	f(x + 1); // �����ϴ°� ����� ��⤺
}

int main() {
	cin >> n;
	f(1);
}