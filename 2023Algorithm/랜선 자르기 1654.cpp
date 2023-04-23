#include <iostream>
#include <vector>
using namespace std;

vector<int> A;
int k, n;
long long num, low, high, mid, res;
long long imax, result;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> num;
		A.push_back(num);

		if (imax < A[i])
			imax = A[i];
	}
	low = 1;
	// 1. ���Ŀ��� ���� �ڿ� �ִ� ��.
	// 2. �Է¹����鼭 ���� ���� ���� ����.
	high = imax;
	while (low <= high) {
		mid = (low + high) / 2; // ������ ��ȯ�� ����
		res = 0;
		for (int i = 0; i < k; i++) {
			res += A[i] / mid;
		}

		if (res >= n) { // �� ���� �߶��� ��
			low = mid + 1; 
			if (result < mid) {
				result = mid;
			}
		}
		else { // ���� �߶��� ��
			high = mid - 1;
		}
		/*if (cnt == n) {
			break;
		}*/
	}
	cout << result << "\n";
	//cout << mid;
}