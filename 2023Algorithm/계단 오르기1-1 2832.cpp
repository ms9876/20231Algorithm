#include <iostream>

using namespace std;

int n, k, res;

// � ���¸� �����Ұų�
// ���� ��ġ, ���� ī��Ʈ
void s(int x, int y) {
    // ��������. ����� �����ϱ�
    if (x > n || y >= k) {
        return;
    }

    // ��ܿ� �ö����� ī������ �ؾ���.
    if (x == n) {
        res++;
        return;
    }

    s(x + 1, y + 1);
    s(x + 2, y + 1);
}

int main() {
    cin >> n >> k;
    s(0, 0);
    cout << res;
}