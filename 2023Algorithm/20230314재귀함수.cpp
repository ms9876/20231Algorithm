#include <iostream>
using namespace std;

#pragma region 1901
int n;
void f(int x) {
	// 종료 조건이 무조건 필요함 (가장 중요)
	if (x > n) {
		return;
	}
	cout << x << endl;
	f(x + 1); // 증가하는걸 상향식 재기ㅊ
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

#pragma region 홀수 출력하기 1904
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

#pragma region n까지의 합 1905
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

#pragma region 팩토리얼 계산 1912
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

#pragma region 피보나치 1915
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


