#include <iostream>

using namespace std;

// ¿µ¼öÁõ 5565

int main() {
	int n, m, sum = 0;
	cin >> n;

	for (int i = 0; i < 9; i++)
	{
		cin >> m;
		sum += m;
	}

	cout << n - sum;

}