#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> a;
vector<int> b;
int n;
int num_n;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num_n;
		a.push_back(num_n);
	}

	for (int i = 0; i < n; i++)
	{
		cin >> num_n;
		b.push_back(num_n);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<>());
	int res = 0;
	for (int i = 0; i < n; i++) {
		res += a[i] * b[i];
	}
	cout << res;
}