#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string s;
        
        cin >> s;

        int cntP = 0;
        int cntY = 0;

        for (char c : s) {
            if (c == 'p') {
                cntP++;
            }
            else if (c == 'y') {
                cntY++;
            }
        }

        if (cntP == cntY) {
            cout << "True" << std::endl;
        }
        else {
            cout << "False" << std::endl;
        }
    }
}
