#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	int arr[10] = { 0 };

	cin >> t;	

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}

		sort(arr, arr + 10);
		cout << arr[7] << endl;
	}
}