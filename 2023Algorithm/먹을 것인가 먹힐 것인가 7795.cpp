#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v, v1;
int t, n, m, tmp, ret;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	for (int tc = 1; tc <= t; tc++) {
		ret = 0;
		v.clear(); v1.clear();
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			v.push_back(tmp);
		}
		for (int i = 0; i < m; i++) {
			cin >> tmp;
			v1.push_back(tmp);
		}

		sort(v.begin(), v.end());
		sort(v1.begin(), v1.end());

		for (int num : v) {
			auto pos = lower_bound(v1.begin(), v1.end(), num);
			ret += (int)(pos - v1.begin());
		}
		cout << ret << "\n";
	}
}