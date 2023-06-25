#include <iostream>
#include <algorithm>

using namespace std;

int arr[500001];
int s, s, c;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> s;
	for (int i = 0; i < s; i++) {
		cin >> c;
		arr[i] = c;
	}
	sort(arr, arr + s);

	cin >> s;
	for (int i = 0; i < s; i++) {
		cin >> c;
		cout << upper_bound(arr, arr + s, c) - lower_bound(arr, arr + s, c) << " ";
	}
}