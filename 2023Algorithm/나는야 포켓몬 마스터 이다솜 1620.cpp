#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int n, s;
unordered_map<int, string> poketNum;
unordered_map<string, int> poketStr;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    string poketmon;

    for (int i = 1; i <= n; i++) {
        cin >> poketmon;
        poketNum[i] = poketmon;
        poketStr[poketmon] = i;
    }

    for (int i = 1; i <= s; i++) {
        cin >> poketmon;
        if (isdigit(poketmon[0])) {
            cout << poketNum[atoi(poketmon.c_str())] << "\n";
        }
        else {
            cout << poketStr[poketmon] << "\n";
        }
    }
}