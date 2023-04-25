#include <iostream>
using namespace std;

int t, s, m;
int main() {
	cin >> t;

	while (t--) {
		long long l = 1;

		cin >> s >> m;

		int temp = m;
		m = s;
		s = temp;

		if (m > s - m) {
			m = s - m;
		}

		for (int i = s; i > s - m; i--)
			l *= i;
		for (int j = m; j >= 1; j--)
			l /= j;

		cout << l << endl;
	}
}