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
void f2(int x) {
	if (x == 0) {
		return;
	}
	cout << x << endl;
	f2(x - 1);
}

int main() {
	cin >> n;
	f2(n);
}
#pragma endregion

#pragma region Ȧ�� ����ϱ� 1904
int o, l;

void f3(int a) {
	if (a % 2 != 0) {
		cout << a << " ";
	}
	if (a >= l) {
		return;
	}
	f3(a + 1);
}

int main() {
	cin >> o >> l;
	f3(o);
}
#pragma endregion

#pragma region n������ �� 1905
int n, sum = 0;
void f4(int x) {
	if (x > n) {
		return;
	}
	sum += x;
	f4(x + 1);
}

int main() {
	cin >> n;
	f4(1);
	cout << sum;
}
#pragma endregion

#pragma region ���丮�� ��� 1912
int n;
int F5(int n)
{
	if (n <= 2)
		return 1;
	else {
		return F5(n - 1) + F5(n - 2);
	}
}

int main() {
	cout << "���° ���� �˰� �����ʴϱ�? : ";
	cin >> n;

	cout << F5(n) << "�Դϴ�";
}
#pragma endregion


