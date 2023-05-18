#include <iostream>
#include <algorithm>

using namespace std;

int x, v, w, h;
int temp1, temp2;

int main() {
    cin >> x >> v >> w >> h;

    temp1 = min(x, v);
    temp2 = min(w - x, h - v);
    cout << min(temp1, temp2);
}