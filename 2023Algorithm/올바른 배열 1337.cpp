#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    int cnt = 4;
    for (int i = 0; i < n; i++) {
        int tmp = distance(arr + i, lower_bound(arr, arr + n, arr[i] + 5));
        cnt = min(cnt, 5 - tmp);
    }

    cout << cnt << endl;
}