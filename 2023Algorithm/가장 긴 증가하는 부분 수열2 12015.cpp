#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
int s, res, num;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;
	v.push_back(-1);
	for (int i = 0; i < s; i++)
	{
		cin >> num;

		if (num > v.back()) { // num�� �� ũ��? �� �ֱ�
			v.push_back(num);
			res++;
		}
		// 1 => 1
		// 1 2 => 2
		else { // �������.
			vector<int>::iterator iter = lower_bound(v.begin(), v.end(), num);
			*iter = num;
		}
	}
	cout << res;
}
