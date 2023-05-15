#include <iostream>
#include <stack>
using namespace std;

int n;
int cnt;

int main() {
    cin >> n;

    while (n--) {
        stack<char> ch;
        string str;
        cin >> str;

        for (int i = 0; i < str.size(); i++) {
           
            if (ch.top() == str[i]) {
                ch.pop();
            }
            else {
                ch.push(str[i]);
            }
        }
        if (ch.empty()) 
            cnt++;
    }

    cout << cnt;
}
