#include <iostream>
using namespace std;

int main() {
	int n, a = 0, b = 0, c = 0;

	cin >> n;

	if (n >= 60) {
		b = n / 60;
		c = n % 60;

		if (b >= 60) {
			a = b / 60;
			b = b % 60;
		}
	}
	else if (n < 60) {
		c = n;
	}
	cout << a << " " << b << " " << c;

	// ¼±»ý´Ô ÄÚµå
	int sec;
	cin >> sec;
	cout << sec / 3600 << " " << sec % 3600 / 60 << " " <<
		sec % 3600 % 60;
}