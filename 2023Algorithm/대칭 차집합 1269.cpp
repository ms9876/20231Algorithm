#include <iostream>
#include <algorithm>
#include <set>  

using namespace std;

int main() {
	set<int> s;
	int n, m, a;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a;

		s.insert(a);
	}
	for (int i = 0; i < m; i++) {
		cin >> a;

		if (s.count(a)) {
			s.erase(a);
		}
		else {
			s.insert(a);
		}
	}

	cout << s.size();

	return 0;
}
