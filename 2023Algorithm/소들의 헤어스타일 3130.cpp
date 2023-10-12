#include <iostream>
#include <stack>
using namespace std;

stack <int> n;
int n;
long long int res = 0;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		while (!n.empty() && n.top() <= x) 
		{
			n.pop(); 
		}
		n.push(x);
		res += n.size() - 1;
	}

	cout << res;
}