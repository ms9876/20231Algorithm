#include <iostream>
using namespace std;

int o, l;

void f3(int a) {
	if (a % 2 != 0) {
		cout << a << " ";
	}
	if (a >= l) {
		return;
	}
	f3(a + 1);
}

int main() {
	cin >> o >> l;
	f3(o);
}