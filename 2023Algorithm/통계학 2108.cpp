#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
vector<int> arr;
int n, temp, range, mid = 0, most_val, mean = 0;
int number[8001];
int main() {
    int m = -9999;

    bool not_first = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
        mean += temp;
        number[temp + 4000]++;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < 8001; i++)
    {
        if (number[i] == 0)
            continue;
        if (number[i] == m)
        {
            if (not_first)
            {
                most_val = i - 4000;
                not_first = false;
            }
        }
        if (number[i] > m)
        {
            m = number[i];
            most_val = i - 4000;
            not_first = true;
        }
    }
    mid = arr[arr.size() / 2];
    mean = round((float)mean / n);
    range = arr.back() - arr.front();
    cout << mean << '\n' << mid << '\n' << most_val << '\n' << range;
}