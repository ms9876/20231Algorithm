#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x > 0) {        // x �� 0���� ũ�� 1, 4�и�
        cout << (y > 0 ? 1 : 4);        // y �� 0���� ũ�� 1�и�, ������ 4�и�
    }
    else {        // x �� 0���� ������ 2, 3�и�
        cout << (y > 0 ? 2 : 3);        // y�� 0���� ũ�� 2�и�, ������ 3�и�
    }
}