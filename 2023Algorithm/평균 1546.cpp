#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;	
	double sum = 0;
	double arr[1001];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);	

	for (int i = 0; i < n; i++) {
		sum = sum + (arr[i] / arr[n - 1]) * 100;	
	}

	cout << sum / n;
}