#include<iostream>

using namespace std;

int main()
{
	int n; string str;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			str[i] = tolower(str[i]);
		}
		cout << str << endl;
	}
}