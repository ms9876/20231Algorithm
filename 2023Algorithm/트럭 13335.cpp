#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> v;
queue<int> q;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, w, l;
    int totalW = 0, itime = 0;
    cin >> n >> w >> l;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < n; i++)
    {
        // 네기 가진 w에 입력할 수 있는지 판단
        // 내가 가진 총무게 다음꺼 넣을 건지 안 넣을 건지 판단
        while (true)
        {
            if (w == q.size())
            {
                totalW -= q.front();
                q.pop();
            }
            if (totalW + v[i] <= l)
                break;
            q.push(0);
            itime++;
        }
        q.push(v[i]);
        totalW += v[i];
        itime++;
    }
    cout << itime + w;
}