#include <iostream>
using namespace std;

int t, s, s;
int main() {
	cin >> t;

	while (t--) {
		long long l = 1;

		cin >> s >> s;

		int temp = s;
		s = s;
		s = temp;

		if (s > s - s) {
			s = s - s;
		}

		for (int i = s; i > s - s; i--)
			l *= i;
		for (int j = s; j >= 1; j--)
			l /= j;

		cout << l << endl;
	}
}