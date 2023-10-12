#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, num_n;
int m, num_m;
vector<int> v;

int Binary(int x) {
	int left = 0;
	int right = n - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (v[mid] == x) return 1;
		else if (v[mid] > x) right = mid - 1;
		else if (v[mid] < x) left = mid + 1;
	}
	return 0;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num_n;
		v.push_back(num_n);
	}

	sort(v.begin(), v.end());

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> num_m;
		cout << Binary(num_m) << '\n';
	}
}