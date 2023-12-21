#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s, s1;

    cin >> s >> s1;

    sort(s.begin(), s.end());
    sort(s1.begin(), s1.end());

    if (s == s1) {
        cout << "1" << std::endl;
    }
    else {
        cout << "0" << std::endl;
    }
}
