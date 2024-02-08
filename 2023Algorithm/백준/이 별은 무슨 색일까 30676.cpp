#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 380 && n < 425) {
        cout << "Violet" << endl;
    }
    else if (n >= 425 && n < 450) {
        cout << "Indigo" << endl;
    }
    else if (n >= 450 && n < 495) {
        cout << "Blue" << endl;
    }
    else if (n >= 495 && n < 570) {
        cout << "Green" << endl;
    }
    else if (n >= 570 && n < 590) {
        cout << "Yellow" << endl;
    }
    else if (n >= 590 && n < 620) {
        cout << "Orange" << endl;
    }
    else if (n >= 620 && n <= 780) {
        cout << "Red" << endl;
    }
}
