#include <iostream>
#include "vector"
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n + 1);
    v[0] = v[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        v[i] = v[i - 1] + v[i - 2] + 1;
    }
    cout << v[n];
    return 0;
}