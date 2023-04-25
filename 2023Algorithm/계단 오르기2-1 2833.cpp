#include <iostream>
using namespace std;

int s, k, res;

void s(int x, int y) {
    if (x > s || y >= k) {
        return;
    }

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