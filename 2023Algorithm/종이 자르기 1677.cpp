#include <iostream>
using namespace std;

int main() {
	int n, m; // 가로 n, 세로 m
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == m - 1) {
				if (j == 0 || j == n - 1) {
					cout << "+";
				}
				else {
					cout << "-";
				}
			}
			else if (j == 0 || j == n - 1) {
				cout << "|";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}