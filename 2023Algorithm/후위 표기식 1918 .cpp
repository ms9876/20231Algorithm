#include <iostream>
#include <stack>
#include <string>
using namespace std;
string str, cnt;
stack <char> n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if ('A' <= str[i] && str[i] <= 'Z') { cnt += str[i]; continue; }

        if (str[i] == '(') { n.push(str[i]); continue; }

        if (str[i] == ')') {
            while (n.top() != '(')
                cnt += n.top(), n.pop();
            n.pop();
            continue;
        }
        if (str[i] == '*' || str[i] == '/') {
            while (!n.empty() && (n.top() == '*' || n.top() == '/'))
                cnt += n.top(), n.pop();
        }
        else {
            while (!n.empty() && n.top() != '(')
                cnt += n.top(), n.pop();
        }
        n.push(str[i]);
    }

    while (!n.empty())
        cnt += n.top(), n.pop();
    cout << cnt << '\n';
}
