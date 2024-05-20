#include <iostream>

using namespace std;

int main() {
    int cnt = 0, n, num;
    int a[101] = { 0 };
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (a[num] != 0)
            cnt++;
        
        a[num]++;
    }
    
    cout << cnt;
}