#include <iostream>
using namespace std;

int n, sum = 0;
void f4(int x) {
	if (x > n) {
		return;
	}
	sum += x;
	f4(x + 1);
}

int main() {
	cin >> n;
	f4(1);
	cout << sum;
}