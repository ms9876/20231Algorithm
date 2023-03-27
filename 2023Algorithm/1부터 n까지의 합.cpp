#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#pragma region 1부터 n까지의 합 출력
int sum(int n) {
	int a = 0;
	for (int i = 1; i <= n; i++) {
		a += i;
	}
	return a;


	return int(n * (n + 1)) / 2; // 위와 같은 코드
}

int main() {
	int n;
	cin >> n;
	cout << sum(n) << endl;
}
#pragma endregion