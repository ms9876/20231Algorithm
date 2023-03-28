#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int k, n;
long long vn, low, high, mid, total;
long long imax, result;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> vn;
		v.push_back(vn);

		if (imax < v[i])
			imax = v[i];
	}
	low = 1;
	// 1. ���Ŀ��� ���� �ڿ� �ִ� ��.
	// 2. �Է¹����鼭 ���� ���� ���� ����.
	high = imax;
	while (low <= high) {
		mid = (low + high) / 2; // ������ ��ȯ�� ����
		total = 0;
		for (int i = 0; i < k; i++) {
			total += v[i] / mid;
		}

		if (total >= n) { // �� ���� �߶��� ��
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