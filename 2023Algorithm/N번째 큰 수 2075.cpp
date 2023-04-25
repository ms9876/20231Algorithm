#include <iostream>
#include <queue>
using namespace std;

int s;
priority_queue<int, vector<int>, greater<>> pq;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            int num;
            cin >> num;
            pq.push(num);


            if (pq.size() > s) {
                pq.pop();
            }
        }
    }

    cout << pq.top();
}
