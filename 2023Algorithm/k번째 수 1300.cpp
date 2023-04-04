#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, k;
int cnt, result;
int arr[] = { 1,2,2,3,3,5,5,5,6 };
vector <int> v = { 1,1,2,2,3,3,4,4,5 };

int main()
{
    //cout << lower_bound(arr, arr + 9, 4) - arr << endl; // 5Ãâ·Â ( ÁÖ¼Ò°¡ ³ª¿È )
    //int test = *lower_bound(arr, arr + 9, 4); ÀÌ°Ô Âð 5

    cin >> n >> k;

    int low = 1;
    long long int high = k;
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