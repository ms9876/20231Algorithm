#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int closestNumber = numbers[0];
    int minNum = abs(k - closestNumber);

    for (int i = 1; i < n; ++i) {
        int m = abs(k - numbers[i]);
        if (m < minNum) {
            minNum = m;
            closestNumber = numbers[i];
        }
    }

    cout << closestNumber;
}
