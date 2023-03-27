#include <iostream>
using namespace std;

int n, m;
int main() {
	cin >> n >> m;

	if (n == 1 || m == 1) {
		cout << "YES";
	}
	else if (n == 2 && m == 2) {
		cout << "YES";
	}
	else {
		cout << "NO" << endl;
	}
}