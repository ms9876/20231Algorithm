#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A;
int n, m; // n : ������ ��, m: ���������� �ϴ� ����
long long num, low, high, mid, cnt, result;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num;
		A.push_back(num);
	}
	low = 0; // 1 or 0

	high = *max_element(A.begin(), A.end());
	while (low <= high) {
		mid = (low + high) / 2;
		for (int i = 0; i < n; i++) {
			cnt += A[i] - mid;
		}

		if (cnt < m) { // ���� ���
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