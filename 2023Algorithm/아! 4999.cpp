#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, s1;
    cin >> s >> s1;

    int cnt = 0, cnt1 = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            cnt++;
        }
    }

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == 'a') {
            cnt1++;
        }
    }
    if (cnt >= cnt1 || s.size() == s1.size()) {  
        cout << "go";
    }
    else {
        cout << "no";
    }

}