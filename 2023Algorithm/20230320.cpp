#include <iostream>
using namespace std;

// ��� �Լ�
#pragma region �Ǻ���ġ ���� 1916
// �޸������̼� => DP(���� ���α׷�)
//int memo[201];
//int f(int x) {
//	// ��������
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

//���� ����
#pragma region ��� ������ 2832
int n, k, cnt;

// � ���¸� �����Ұų�
// ���� ��ġ, ���� ī��Ʈ
void s(int x, int y) {
    // ��������. ����� �����ϱ�
    if (x > n || y >= k) {
        return;
    }

    // ��ܿ� �ö����� ī������ �ؾ���.
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
