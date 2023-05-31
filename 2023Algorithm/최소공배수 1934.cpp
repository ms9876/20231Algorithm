#include<iostream>

using namespace std;

int divide(int x, int y)
{
    if (x % y == 0)
        return y;
    else
        return divide(y, x % y);
}

int main()
{
    int n;
    int a, b;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a >= b)
        {
            cout << a * b / divide(a, b) << "\n";
        }
        else
            cout << a * b / divide(b, a) << "\n";
    }
}
