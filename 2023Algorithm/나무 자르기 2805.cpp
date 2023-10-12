#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int n, n; // n : ������ ��, m: ���������� �ϴ� ����
long long num_n, low, high, mid, res, result;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> n;
	for (int i = 0; i < n; i++) {
		cin >> num_n;
		v.push_back(num_n);
	}
	low = 0; // 1 or 0

	high = *max_element(v.begin(), v.end());
	while (low <= high) {
		mid = (low + high) / 2;
		for (int i = 0; i < n; i++) {
			res += v[i] - mid;
		}

		if (res < n) { // ���� ���
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