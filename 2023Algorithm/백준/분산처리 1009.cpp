#include <iostream>

using namespace std;

int main() {
	int t, n, m, mul;

	cin >> t;

	while (t--) {
		mul = 1;

		cin >> n >> m;

		m = !(m % 4) ? 4 : m % 4;

		while (m--)
			mul *= n;

		cout << (mul % 10 ? mul % 10 : 10) << "\n";
	}
}