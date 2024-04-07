#include<iostream>

using namespace std;

int main()
{
    int year[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    string weeks[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
    int sum = 0;

    int x, y;

    cin >> x >> y;

    sum += y;

    for (int i = 0; i < x - 1; i++)
    {
        sum += year[i];
    }

    cout << weeks[sum % 7];
}
