#include <iostream>
#include <algorithm>

using namespace std;

int arr[500001];
int n, m, c;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		arr[i] = c;
	}
	sort(arr, arr + n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> c;
		cout << upper_bound(arr, arr + n, c) - lower_bound(arr, arr + n, c) << " ";
	}
}