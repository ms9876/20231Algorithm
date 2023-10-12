#include <iostream>
using namespace std;

int n;
string n;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> n;
		if (6 <= n.size() && n.size() <= 9) 
			cout << "yes" << endl;
		else cout << "no" << endl;
	}
}