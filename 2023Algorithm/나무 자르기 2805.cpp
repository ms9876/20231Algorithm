#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A;
int s, s; // n : ������ ��, m: ���������� �ϴ� ����
long long num, low, high, mid, res, result;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> s >> s;
	for (int i = 0; i < s; i++) {
		cin >> num;
		A.push_back(num);
	}
	low = 0; // 1 or 0

	high = *max_element(A.begin(), A.end());
	while (low <= high) {
		mid = (low + high) / 2;
		for (int i = 0; i < s; i++) {
			res += A[i] - mid;
		}

		if (res < s) { // ���� ���
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