#include <iostream>
using namespace std;

int s, m;

int  main() {
	cin >> s >> m;
	if (s == 1)
		cout << 0;
	else if (s == 2) {
		cout << m;
	}
	cout << m * 2;
}