#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<pair<int, int>, pair<int, string>>> s(n); // y, m, d, name

    for (int i = 0; i < n; i++) {
        cin >> s[i].second.second >> s[i].second.first >> s[i].first.second >> s[i].first.first;
    }

    sort(s.begin(), s.end());

    cout << s[n - 1].second.second << endl << s[0].second.second;
}