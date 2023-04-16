#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    int n, num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> n;
        s.push(n);
    }

    for (int i = 0; i < num; i++) {
        cout << s.top() << " ";
        s.pop(); 
    }
}