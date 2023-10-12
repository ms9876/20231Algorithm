#include <iostream>
#include <set>
#include <string>
using namespace std;

int n, n, res;
string n_str, m_str;
set<string> n;

int main() {
    cin >> n >> n;

    for (int i = 0; i < n; i++) {
        cin >> n_str;
        n.insert(n_str);
    }
    for (int i = 0; i < n; i++) {
        cin >> m_str;
        if (n.find(m_str) != n.end()) {
            res++;
        }
    }
    cout << res;
}