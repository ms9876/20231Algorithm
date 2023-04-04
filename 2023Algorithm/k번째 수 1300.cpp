#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int cnt, result;

int main()
{
    cin >> n >> k;

    int low = 1;
    long long  high = n * n;
    int mid = 0;
    while (low <= high)
    {
        cnt = 0;
        mid = (low + high) / 2;
        for (int i = 1; i <= n; i++)
        {
            cnt += min(mid / i, n);
        }
        if (cnt < k)
        {
            low = mid + 1;
        }
        else
        {
            result = mid;
            high = mid - 1;
        }
    }

    cout << result;
}