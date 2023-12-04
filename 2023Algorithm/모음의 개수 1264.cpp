#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string str;
	vector<int> blankNum;
	getline(cin, str, '\n');
	while (str != "#")
	{
		int cnt = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == 'a' || str[i] == 'A') cnt++;
			else if (str[i] == 'e' || str[i] == 'E') cnt++;
			else if (str[i] == 'i' || str[i] == 'I') cnt++;
			else if (str[i] == 'o' || str[i] == 'O') cnt++;
			else if (str[i] == 'u' || str[i] == 'U') cnt++;
		}
		blankNum.push_back(cnt);
		getline(cin, str, '\n');
	}

	for (int i = 0; i < blankNum.size(); i++)
	{
		cout << blankNum[i] << "\n";
	}
}