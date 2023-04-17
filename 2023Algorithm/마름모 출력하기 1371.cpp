#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n * 2; i++) {
		for (int j = 1; j <= n * 2; j++) {
			if (i + j == n + 1) // 왼쪽 상단
				cout << "*";
			else if (i - n == j)  // 오른쪽 상단  
				cout << "*";
			else if (j - n == i) // 왼쪽 하단
				cout << "*";
			else if (i + j == 3 * n + 1) // 오른쪽 하단
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}