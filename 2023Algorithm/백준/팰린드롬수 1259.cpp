#include <iostream>

using namespace std;

void palindrome(string _str, int _first, int _last)
{
    if (_last <= _first) cout << "yes" << '\n';
    else if (_str[_first] != _str[_last]) cout << "no" << '\n';
    else return palindrome(_str, _first + 1, _last - 1);
}

int main()
{
    string str;
    while (cin >> str)
    {
        if (str == "0")
            break;

        palindrome(str, 0, str.length() - 1);
    }
}