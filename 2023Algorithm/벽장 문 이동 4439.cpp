#include <iostream>
using namespace std;

#pragma region ���� Ǯ�� �õ�
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

#pragma region ����
int n, m;
int door1, door2;
int arr[21];
int answer = 9999; // ū �� �����
// ���� ��, ã�ư��� �� ��, ī���� (���� ����)
void solve(int d1, int d2, int dis, int cnt) { // dis�� �Ÿ�
	if (m == cnt) {
		answer = min(answer, dis); // min: ���� ���� �͸� ���ֱ�
		return;
	}
	// 2����
	// 1. d1�� �����̴� ���, 2. d2�� �����̴� ���
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