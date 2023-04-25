#include <iostream>
using namespace std;

int s, m;
int main() {
	cin >> s >> m;

	if (s == 1 || m == 1) {
		cout << "YES";
	}
	else if (s == 2 && m == 2) {
		cout << "YES";
	}
	else {
		cout << "NO" << endl;
	}
}