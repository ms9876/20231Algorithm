#include <iostream>
using namespace std;

int s, sum = 0;
void f4(int x) {
	if (x > s) {
		return;
	}
	sum += x;
	f4(x + 1);
}

int main() {
	cin >> s;
	f4(1);
	cout << sum;
}