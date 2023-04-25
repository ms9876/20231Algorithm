#include <iostream>
using namespace std;

int s, k, m = 2;

int s(int oo, int y) {

    if (oo == m || oo > s || y >= k) {
        return 0;
    }
    if (oo == s) {
        return 1;
    }

    return s(oo + 1, y + 1) + s(oo + 2, y + 1) + s(oo + 3, y + 1);
}
int main() {
    cin >> s >> m >> k;
    cout << s(0, 0);

}