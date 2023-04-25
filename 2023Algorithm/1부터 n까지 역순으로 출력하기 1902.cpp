#include <iostream>
using namespace std;

int s;
void f2(int x) {
	if (x == 0) {
		return;
	}
	cout << x << endl;
	f2(x - 1);
}

int main() {
	cin >> s;
	f2(s);
}