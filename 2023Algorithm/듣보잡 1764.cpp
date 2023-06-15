#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    string s = "";
    map<string, int> M;
    vector<string> v;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        M[s] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        if (M.find(s) != M.end())
        {
            v.push_back(s);
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}