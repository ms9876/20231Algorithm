#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> tree;


int b(long long n, long long m) {
	long long left = 1, right = n, mid, sum;

	while (left <= right)
	{
		mid = (left + right) / 2;

		sum = 0;

		for (auto i : tree) {
			if (i > sum) {
				sum += i - mid;
			}
		}

		if (sum < m) {
			right = mid - 1;
		}
		else
			left = mid + 1;
	}

	return right;
}

int main() {
	long long n, m;

	cin >> n >> m;
	tree.resize(n);

	for (long long i = 0; i < n; i++)
	{
		cin >> tree[i];
	}
	sort(tree.begin(), tree.end());

	cout << b(tree.back(), m);

}