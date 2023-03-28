#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int n, m; // n : 나무의 수, m: 가져가려고 하는 길이
long long vn, low, high, mid, total, result;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> vn;
		v.push_back(vn);
	}
	low = 0; // 1 or 0

	high = *max_element(v.begin(), v.end());
	while (low <= high) {
		mid = (low + high) / 2;
		for (int i = 0; i < n; i++) {
			total += v[i] - mid;
		}

		if (total < m) { // 적을 경우
			high = mid - 1;
		}	
		else { 
			result = mid;
			low = mid + 1;
		}
		/*
		if (result == m)
			break;*/
	}
	cout << result;
}