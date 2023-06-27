#include <iostream>

using namespace std;

int main() {
	int first, n, cnt = 0;
	cin >> first;

	n = first;

	do {
		n = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;

		cnt++;
	} while (first != n);

	cout << cnt;
}