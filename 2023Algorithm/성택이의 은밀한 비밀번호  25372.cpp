#include <iostream>
using namespace std;

int n;
string s;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (6 <= s.size() && s.size() <= 9) 
			cout << "yes" << endl;
		else cout << "no" << endl;
	}
}