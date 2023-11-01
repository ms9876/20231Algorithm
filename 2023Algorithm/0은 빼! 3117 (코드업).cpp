#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    int k;
    cin >> k;
    int *arr = new int[k];
    int sum = 0;

    for (int i = 0; i < k; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            sum -= s.top();
            s.pop();
        }
        else {
            s.push(arr[i]);
            sum += s.top();
        }
    }
    cout << sum << endl;
}