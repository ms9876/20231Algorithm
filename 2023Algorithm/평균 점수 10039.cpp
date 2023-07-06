#include <iostream>
using namespace std;

int sum;
int main() {
    for (int i = 0; i < 5; i++) {
        int n = 0;
        cin >> n;

        if (n < 40) n = 40;
        sum += n;
    }

    cout << sum / 5;
}