#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    unordered_set<int> card;
    int n, m, num;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> num;
        card.insert(num);
    }
    for (int i = 0; i < m; i++) {
        cin >> num;
        if (card.find(num) != card.end())
            cout << "0 ";
        else
            cout << "1 ";
    }
}