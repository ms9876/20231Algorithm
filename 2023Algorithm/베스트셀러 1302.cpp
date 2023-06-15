#include <iostream>
#include <map>

using namespace std;

int main() {
	int n;
	int maxV = -1;
	string str;
	string res;

	map<string, int> book;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		++book[str];
	}

	for (auto iter = book.begin(); iter != book.end(); iter++)
	{
		if (maxV < iter->second) {
			maxV = iter->second;
			res = iter->first;
		}
	}

	cout << res;
}