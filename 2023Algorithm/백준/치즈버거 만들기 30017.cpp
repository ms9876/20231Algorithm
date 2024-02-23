#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (b == a - 1 ? a + b : (b >= a ? a + a - 1 : b + b + 1));
}