#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> set;
    string s;
    int n = 1;

    cin >> s;

    while (n <= s.length())
    {
        for (int i = 0; i < s.length(); ++i)
        {
            string te = s.substr(i, n);
            set.insert(te);
        }

        n++;
    }

    cout << set.size();
}