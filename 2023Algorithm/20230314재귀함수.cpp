#include <iostream>
using namespace std;

#pragma region 1901
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
#pragma endregion

#pragma region 1902
int n;
void f(int x) {
	if (x == 0) {
		return;
	}
	cout << x << endl;
	f(x - 1);
}

int main() {
	cin >> n;
	f(n);
}
#pragma endregion

#pragma region Ȧ�� ����ϱ� 1904
int o, l;

void f(int a) {
	if (a % 2 != 0) {
		cout << a << " ";
	}
	if (a >= l) {
		return;
	}
	f(a + 1);
}

int main() {
	cin >> o >> l;
	f(o);
}
#pragma endregion

#pragma region n������ �� 1905
int n, sum = 0;
void f(int x) {
	if (x > n) {
		return;
	}
	sum += x;
	f(x + 1);
}

int main() {
	cin >> n;
	f(1);
	cout << sum;
}
#pragma endregion

#pragma region ���丮�� ��� 1912
int n;
int f(int x) {
	if (x == 0) {
		return;
	}
	return f(x - 1) * x;
}

int main() {
	cin >> n;
	f(n);
}
#pragma endregion

#pragma region �Ǻ���ġ 1915
int n;

int f(int x) {
	if (x <= 27)
		return;
	return f(x - 2) + f(x - 1);
}
int main() {
	cin >> n;
	cout << f(n);
}
#pragma endregion


