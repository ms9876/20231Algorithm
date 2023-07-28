#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> item(n); 

    for (int i = 0; i < n; ++i) {
        cin >> item[i].first >> item[i].second;
    }

    int maxP = -1;

    for (int i = 0; i < n; ++i) {
        int p = 0;
        for (int j = 0; j < n; ++j) {
            if (item[j].first >= item[i].first && item[j].first <= item[i].first + item[i].second) {
                p += item[j].second;
            }
        }
        maxP = max(maxP, p);
    }

    cout << maxP;
}
