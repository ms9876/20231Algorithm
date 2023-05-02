#include <iostream>
#include <stack>
#include <string>
using namespace std;
string str, ans;
stack <char> s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if ('A' <= str[i] && str[i] <= 'Z') { ans += str[i]; continue; }

        if (str[i] == '(') { s.push(str[i]); continue; }

        if (str[i] == ')') {
            while (s.top() != '(')
                ans += s.top(), s.pop();
            s.pop();
            continue;
        }
        if (str[i] == '*' || str[i] == '/') {
            while (!s.empty() && (s.top() == '*' || s.top() == '/'))
                ans += s.top(), s.pop();
        }
        else {
            while (!s.empty() && s.top() != '(')
                ans += s.top(), s.pop();
        }
        s.push(str[i]);
    }

    while (!s.empty())
        ans += s.top(), s.pop();
    cout << ans << '\n';
}
