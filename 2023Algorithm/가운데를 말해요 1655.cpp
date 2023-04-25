#include<iostream>
#include<queue>
using namespace std;
int s;
priority_queue<int> pqmax; // �����͵��� max���� top
// ū�͵��� min���� top
priority_queue<int, vector<int>, greater<int>> pqmin;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        int pqn;
        cin >> pqn;

        // ũ�Ⱑ ������ �ִ� ���� ����.
        if (pqmax.size() == pqmin.size())
            pqmax.push(pqn);
        // �ƴϸ� �ּ� ���� ����.
        else
            pqmin.push(pqn);

        // maxť top > minť top �̸�
        // maxť�� min top ���� swap�ؼ�
        // maxť�� top���� ��ü���� ¦���Ͻ� ���� �� ���
        // ��ü���� Ȧ���Ͻ� �߰� ���� ��� ������ ������.
        if (!pqmax.empty() && !pqmin.empty() &&
            pqmax.top() > pqmin.top())
        {
            int imax, imin;
            imax = pqmax.top();
            imin = pqmin.top();
            pqmax.pop();
            pqmin.pop();
            pqmax.push(imin);
            pqmin.push(imax);
        }
        // �߰����� ���
        cout << pqmax.top() << '\n';
    }
}

#pragma region �� �ڵ� �ٵ� �̰� �� �� ����,,,,
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//priority_queue<int, vector<int>, less<int>> pqmax;
//priority_queue<int, vector<int>, greater<int>> pqmin;
//
//int n, num;
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        cin >> num;
//
//        if (pqmax.size() == pqmin.size())
//            pqmax.push(num);
//        else
//            pqmin.push(num);
//
//        if (!pqmax.empty() && !pqmin.empty() && pqmax.top() > pqmin.top())
//        {
//            int imax, imin;
//            imax = pqmax.top();
//            imin = pqmin.top();
//            pqmax.pop();
//            pqmin.pop();
//            pqmax.push(imin);
//            pqmin.push(imax);
//        }
//
//        cout << pqmax.top();
//
//    }
//}
#pragma endregion
