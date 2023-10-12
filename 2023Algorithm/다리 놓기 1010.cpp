#include <iostream>
using namespace std;

int t, n, n;
int main() {
	cin >> t;

	while (t--) {
		long long l = 1;

		cin >> n >> n;

		int temp = n;
		n = n;
		n = temp;

		if (n > n - n) {
			n = n - n;
		}

		for (int i = n; i > n - n; i--)
			l *= i;
		for (int j = n; j >= 1; j--)
			l /= j;

		cout << l << endl;
	}
}