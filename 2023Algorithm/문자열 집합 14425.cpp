#include <iostream>
#include <set>
#include <string>
using namespace std;

int n, s, res;
string n_str, m_str;
set<string> s;

int main() {
    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        cin >> n_str;
        s.insert(n_str);
    }
    for (int i = 0; i < s; i++) {
        cin >> m_str;
        if (s.find(m_str) != s.end()) {
            res++;
        }
    }
    cout << res;
}