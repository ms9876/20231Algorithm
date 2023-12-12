#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	int n, time = 0, ans = 0;
	cin >> n;
	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i].second >> v[i].first;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		if (time <= v[i].second) {
			time = v[i].first;
			ans++;
		}
	}

	cout << ans;
}