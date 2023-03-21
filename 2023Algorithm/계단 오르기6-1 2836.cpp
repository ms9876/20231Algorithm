#include <iostream>
using namespace std;

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