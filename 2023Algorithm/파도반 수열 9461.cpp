#include <iostream>

using namespace std;

int main() {
	int t, n;

	long long dp[101] = { 0, 1, 1, 1, 2, 2 };
	
	cin >> t;

	while (t--)
	{
		cin >> n;

		for (int i = 6; i <= n; i++)
		{
			dp[i] = dp[i - 1] + dp[i - 5];
		}

		cout << dp[n] << '\n';
	}

}
