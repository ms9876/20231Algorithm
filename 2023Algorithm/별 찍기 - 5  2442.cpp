#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n - i; j++) 
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) // 별을 개수는 2 * i - 1 하면 구할 수 있다
        {
            cout << "*";
        }

        cout << endl;
    }
}