#include <iostream>
using namespace std;

int s, k;
int memo[40][40][40];
int chk[40][40][40];
// oo�� ��ġ xx�� ��ġ, k(���ѻ���)
int solve(int oo, int xx, int y) {
    // ���� ����
    if (oo > s || xx > s || y >= k)
        return 0;
    if (oo == s && xx == s) {
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
    cin >> s >> k;
    cout << solve(0, 0, 0);
}