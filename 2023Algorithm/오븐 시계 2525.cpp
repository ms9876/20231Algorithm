#include <iostream>
using namespace std;

int main() {
    int a, b, c; 
    int h, m;

    cin >> a >> b;
    cin >> c;

    if (b + c < 60)
    {
        h = a;
        m = b + c;
    }
    else
    {
        h = (a + int((b + c) / 60)) % 24;
        m = (b + c) % 60;
    }

    cout << h << " " << m;
    return 0;

}