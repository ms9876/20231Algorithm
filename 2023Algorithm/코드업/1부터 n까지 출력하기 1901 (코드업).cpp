#include <iostream>
using namespace std;

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