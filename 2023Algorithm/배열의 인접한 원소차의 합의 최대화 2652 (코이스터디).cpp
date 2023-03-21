#include <iostream>
using namespace std;

int n, m;

int  main() {
	cin >> n >> m;
	if (n == 1)
		cout << 0;
	else if (n == 2) {
		cout << m;
	}
	cout << m * 2;
}