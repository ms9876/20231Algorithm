#include <iostream>

using namespace std;

int dp[100] = { 0, 1, 1 };

int f(int n) {

    if (n <= 2)
        return dp[n];
    else if (dp[n] == 0) // 메모이제이션
        dp[n] = (f(n - 1) + f(n - 2));
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
}