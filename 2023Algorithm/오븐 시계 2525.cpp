#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int h = 0, m = 0;
	cin >> a >> b >> c;

	if (b + c < 60) {
		h = a;
		m = b + c;
	}
	else if (b + c > 60) {
		h += (b + c) / 60;
		m = (b + c) % 60;
	}

	cout << a << " " << b;

}