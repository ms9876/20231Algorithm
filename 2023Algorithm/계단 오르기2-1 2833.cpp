#include <iostream>
using namespace std;

int n, k, total;

void s(int x, int y) {
    if (x > n || y >= k) {
        return;
    }

    if (x == n) {
        total++;
        return;
    }

    s(x + 1, y + 1);
    s(x + 2, y + 1);
}

int main() {
    cin >> n >> k;
    s(0, 0);
    cout << total;
}