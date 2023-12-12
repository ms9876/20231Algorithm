#include <iostream>

using namespace std;

int main()
{
    int cnt = 1;
    int arr[3] = { 0 };

    for (int i = 0; i < 3; ++i)
        cin >> arr[i];

    for (int i = 0; i < 3; ++i)
    {
        if (arr[i] % 2 == 1)
            cnt *= arr[i];
    }

    if (cnt == 1)
        cnt *= arr[0] * arr[1] * arr[2];

    cout << cnt;
}