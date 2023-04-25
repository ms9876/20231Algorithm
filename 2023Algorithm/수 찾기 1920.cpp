#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int s, num;
int m, vm;
vector<int> A;

int bisearch(int x) {
	int low = 0;
	int high = s - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (A[mid] == x) return 1;
		else if (A[mid] > x) high = mid - 1;
		else if (A[mid] < x) low = mid + 1;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> s;
	for (int i = 0; i < s; i++)
	{
		cin >> num;
		A.push_back(num);
	}

	sort(A.begin(), A.end());

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> vm;
		cout << bisearch(vm) << '\n';
	}
#pragma region 내 코드
	//int x, n, m;
	//int arr[100000];

	//cin >> n;

	//for (int i = 0; i < n; i++) {
	//	cin >> arr[i];
	//}

	//cin >> m;

	//for (int i = 0; i < m; i++) {
	//	cin >> x;
	//}

	//sort(arr, arr + n);

	//int low = 0, high = 0, mid;

	//while (low > high) {
	//	mid = (low + high) / 2;
	//	if (x == arr[mid]) {
	//		cout << 1 << endl;
	//	}
	//	else if (x < arr[mid]) { // 왼쪽에 있는 상황
	//		high = mid - 1;
	//	}
	//	else if (x > arr[mid]) { // 오른쪽에 있는 상황
	//		low = mid + 1;
	//	}
	//	cout << 0 << endl;
	//}

	//return 0;
#pragma endregion
}