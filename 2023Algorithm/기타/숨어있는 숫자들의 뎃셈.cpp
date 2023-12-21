#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    cin >> str;

    int sum = 0;
    bool isNum = false;
    int currentNum = 0;

    for (char c : str) {
        if (c >= '0' && c <= '9') {
            isNum = true;
            currentNum = currentNum * 10 + (c - '0');
            sum += currentNum;
            currentNum = 0;

        }
        else {
            if (isNum) {
                
                isNum = false;
            }
        }
    }

    if (isNum) {
        sum += currentNum;
    }

    cout << sum << std::endl;
}
