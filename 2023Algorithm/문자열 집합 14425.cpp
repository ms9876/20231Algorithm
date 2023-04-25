#include <iostream>
#include <set>
#include <string>
using namespace std;

int n, m, res;
string n_str, m_str;
set<string> s;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> n_str;
        s.insert(n_str);
    }
    for (int i = 0; i < m; i++) {
        cin >> m_str;
        if (s.find(m_str) != s.end()) {
            res++;
        }
    }
    cout << res;
}