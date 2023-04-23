#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
int n, res, num;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	v.push_back(-1);
	for (int i = 0; i < n; i++)
	{
		cin >> num;

		if (num > v.back()) { // num이 더 크면? 걍 넣기
			v.push_back(num);
			res++;
		}
		// 1 => 1
		// 1 2 => 2
		else { // 덮어버려.
			vector<int>::iterator iter = lower_bound(v.begin(), v.end(), num);
			*iter = num;
		}
	}
	cout << res;
}
