#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        string str = to_string(num);

        for (char i : str) {
            if (i == '7') {
                cnt++;
            }
        }
    }

    cout << cnt;
}
