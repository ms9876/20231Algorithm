#include <iostream>
#include <vector>
using namespace std;

 //메모이제이션 => DP(동적 프로그램)
int memo[201];
int f(int x) {
	// 종료조건
	if (memo[x])
		return memo[x];
	if (x <= 2)
		return 1;
	return memo[x] = f(x - 1) + f(x - 2);
}

int main() {
	int n;
	cin >> n;
	cout << f(n) << endl;
}