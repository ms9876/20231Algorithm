#include <iostream>
using namespace std;

int main() {
	int width, width1, width2;
	int length, length1, length2;

	cin >> width >> length;
	cin >> width1 >> length1;
	cin >> width2 >> length2;

	int a = width * length;
	int b = width1 * length1;
	int c = width2 * length2;

	int max = 0;

	if (max < a) {
		max = a;
	}
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}

	cout << max;
}