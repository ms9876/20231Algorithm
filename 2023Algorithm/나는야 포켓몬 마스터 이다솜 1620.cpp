#include <iostream>
#include <string>
#include <map>
using namespace std;

int n, m;
map<int, string> poketNum;
map<string, int> poketStr;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    string poketmon;

    for (int i = 1; i <= n; i++) {
        cin >> poketmon;
        poketNum[i] = poketmon;
        poketStr[poketmon] = i;
    }

    for (int i = 1; i <= m; i++) {
        cin >> poketmon;
        if (isdigit(poketmon[0])) {
            cout << poketNum[atoi(poketmon.c_str())] << "\n";
        }
        else {
            cout << poketStr[poketmon] << "\n";
        }
    }
}