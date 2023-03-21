#include <iostream>
using namespace std;

#pragma region 문제 풀이 시도
int n, k;
int door1, door2;
int arr[21] = { 0 };
int move[21][21];

int solve(int d1, int d2, int cnt) {
	if (cnt > k) {
		return 0;
	}
	if (n == d1 || n == d2) {
		cnt++;
		return 1;
	}
}

int main() {
	cin >> n;
	cin >> door1 >> door2;
	cin >> k;

	for (int i = 0; i <= k; i++) {
		cin >> arr[i];
	}

	cout << solve(door1, door2, 0);
}
#pragma endregion

#pragma region 정답
int n, m;
int door1, door2;
int arr[21];
int answer = 9999; // 큰 값 만들기
// 열린 문, 찾아가야 될 곳, 카운팅 (제한 사항)
void solve(int d1, int d2, int dis, int cnt) { // dis는 거리
	if (m == cnt) {
		answer = min(answer, dis); // min: 가장 작은 것만 넣주기
		return;
	}
	// 2가지
	// 1. d1을 움직이는 경우, 2. d2를 움직이는 경우
	solve(arr[cnt], d2, dis + abs(arr[cnt] - d1), cnt + 1);
	solve(d1, arr[cnt], dis + abs(arr[cnt] - d2), cnt + 1);
}
int main() {
	cin >> n;
	cin >> door1 >> door2;
	cin >> m;

	for (int i = 0; i <= m; i++) {
		cin >> arr[i];
	}
	solve(door1, door2, 0, 0);
	cout << answer;
}
#pragma endregion