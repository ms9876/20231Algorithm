#include <iostream>
using namespace std;

int s, k, res;

// � ���¸� �����Ұų�
// ���� ��ġ, ���� ī��Ʈ
void s(int x, int y) {
    // ��������. ����� �����ϱ�
    if (x > s || y >= k) {
        return;
    }

    // ��ܿ� �ö����� ī������ �ؾ���.
    if (x == s) {
        res++;
        return;
    }

    s(x + 1, y + 1);
    s(x + 2, y + 1);
}

int main() {
    cin >> s >> k;
    s(0, 0);
    cout << res;
}