#include <iostream>

using namespace std;

int main() {
	int n, m, num = 0;
	cin >> n >> m;

	num = n * m;

	for (int i = 0; i < 5; i++)
	{
		int a;
		cin >> a;

		cout << a - num << ' ';
	}
}