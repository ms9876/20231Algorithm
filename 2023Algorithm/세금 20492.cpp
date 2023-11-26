#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;

	cout << n * 78 / 100 << ' ' << n * 8 / 10 + (n * 2 / 10) * 78 / 100 << endl;
}