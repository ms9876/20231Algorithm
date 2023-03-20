#include <iostream>
using namespace std;

// 재귀 함수
#pragma region 피보나치 수열 1916
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
#pragma endregion

//상태 정의
#pragma region 계단 오르기1-1 2832
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

#pragma region 계단 오르기2-1 2833
int n, k, cnt;

void s(int x, int y) {
    if (x > n || y >= k) {
        return;
    }

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

#pragma region 계단 오르기3-1 2834

int n, k;
int memo[40][40][40];
int chk[40][40][40];
// oo의 위치 xx의 위치, k(제한사항)
int solve(int oo, int xx, int y) {
    // 종료 조건
    if (oo > n || xx > n || y >= k) 
        return 0;
    if (oo == n && xx == n) {
        return 1;
    }
    if (chk[oo][xx][y] == 1) {
        return memo[oo][xx][y];
    }
    chk[oo][xx][y] = 1;
    return memo[oo][xx][y] = solve(oo + 1, xx + 1, y + 1) + 
    solve(oo + 2, xx + 1, y + 1) +
    solve(oo + 1, xx + 2, y + 1) +
    solve(oo + 2, xx + 2, y + 1);
}

int main() {
    cin >> n >> k;
    cout << solve(0, 0, 0); 
}
#pragma endregion

#pragma region 계단 오르기4-1 2835 
int n, k;

int solve(int oo, int prev, int y) {
    // 종료 조건
    if (oo > n || y >= k)
        return 0;
    if (oo == n)
        return 1;

    if (prev == 0) {
        return solve(oo + 1, 1, y + 1) + solve(oo + 2, 2, y + 1) + solve(oo + 3, 3, y + 1);
    }
    else if (prev == 1) {
        return solve(oo + 2, 2, y + 1) + solve(oo + 3, 3, y + 1);
    }
    else if (prev == 2) {
        return solve(oo + 1, 1, y + 1) + solve(oo + 3, 3, y + 1);
    }
    else if (prev == 3) {
        return solve(oo + 1, 1, y + 1) + solve(oo + 2, 2, y + 1);
    }
}

int main() {
    cin >> n >> k;
    cout << solve(0, 0, 0);
}
#pragma endregion

#pragma region 계단 오르기6-1 2836
int n, k, m = 2;

int s(int oo, int y) {

    if (oo == m || oo > n || y >= k) {
        return 0;
    }
    if (oo == n) {
        return 1;
    }

    return s(oo + 1, y + 1) + s(oo + 2, y + 1) + s(oo + 3, y + 1);
}
int main() {
    cin >> n >> m >> k;
    cout << s(0, 0);
    
}
#pragma endregion
