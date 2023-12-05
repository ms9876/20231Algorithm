#include <iostream>

using namespace std;

int main() {
	int coin[] = { 1, 4, 5 };
	int n;

	cin >> n;
	
    int dp[10001];

    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        dp[i] = INT_MAX;
        for (int j = 0; j < n; ++j) {
            if (i - coin[j] >= 0 && dp[i - coin[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin[j]] + 1);
            }
        }
    }

    cout << dp[n] << endl;


}