#include <iostream>
using namespace std;

// 재귀 함수
#pragma region 피보나치 수열 1916
// 메모이제이션 => DP(동적 프로그램)
//int memo[201];
//int f(int x) {
//	// 종료조건
//	if (memo[x]) 
//		return memo[x];
//	if (x <= 2)
//		return 1;
//	return memo[x] = f(x - 1) + f(x - 2);
//}
//
//int main() {
//	int n;
//	cin >> n;
//	cout << f(n) << endl;
//}
#pragma endregion

//상태 정의
#pragma region 계단 오르기 2832
int n, k, cnt;

// 어떤 상태를 정의할거냐
// 현재 위치, 경우당 카운트
void s(int x, int y) {
    // 종료조건. 계단이 없으니까
    if (x > n || y >= k) {
        return;
    }

    // 계단에 올랐으니 카운팅을 해야함.
    if (x == n) {
        cnt++;
        return;
    }

    s(x + 1, y + 1);
    s(x + 2, y + 1);
}

int main() {
    cin >> n >> k;
    s(0, 0);
    cout << cnt;
}
#pragma endregion
