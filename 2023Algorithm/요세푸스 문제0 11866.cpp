#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
int k, n;

int main() {
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    cout << "<";

    while (true) {
        for (int i = 1; i < k; ++i) {
            q.push(q.front());
            q.pop();
        }

        cout << q.front();
        q.pop();

        if (!q.empty()) {
            cout << ", ";
        }
        else {
            break;
        }
    }

    cout << ">";
}
