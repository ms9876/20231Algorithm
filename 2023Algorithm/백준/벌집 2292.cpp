#include <iostream>
using namespace std;

int main()
{
    long long n, level = 0, step = 1, now = 0;
    cin >> n;
    while (now + 1 < n)
    {
        level += 6;
        now += level;

        step++;
    }
    cout << step;
}