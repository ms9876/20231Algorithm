#include <iostream>
#include <stack>
using namespace std;

stack <int> s;
int n;
long long int cnt = 0;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		while (!s.empty() && s.top() <= x) 
		{
			s.pop(); 
		}
		s.push(x);
		cnt += s.size() - 1;
	}

	cout << cnt;
}