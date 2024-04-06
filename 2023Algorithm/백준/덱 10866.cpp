#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n, m;
    string str;
    deque<int> dq;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> str;

        if (str == "push_back")
        {
            cin >> m;
            dq.push_back(m);
        }
        else if (str == "push_front")
        {
            cin >> m;
            dq.push_front(m);
        }
        else if (str == "pop_back")
        {
            if (dq.empty())
                cout << "-1" << '\n';
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (str == "pop_front")
        {
            if (dq.empty())
                cout << "-1" << '\n';
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (str == "front")
        {
            if (dq.empty())
                cout << "-1" << '\n';
            else
                cout << dq.front() << '\n';
        }
        else if (str == "back")
        {
            if (dq.empty())
                cout << "-1" << '\n';
            else
                cout << dq.back() << '\n';
        }
        else if (str == "size")
        {
            cout << dq.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << dq.empty() << '\n';
        }
    }
}