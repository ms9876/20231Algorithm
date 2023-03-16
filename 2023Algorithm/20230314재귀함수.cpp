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

#pragma region 홀수 출력하기 1904
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

#pragma region n까지의 합 1905
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

#pragma region 팩토리얼 계산 1912
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
	cout << "몇번째 수가 알고 싶으십니까? : ";
	cin >> n;

	cout << F5(n) << "입니다";
}
#pragma endregion


