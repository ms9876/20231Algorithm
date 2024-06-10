#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

struct Item
{
    long long m, v;        // ����, ��ġ
};

bool Compare(Item one, Item two)        // ��ġ�ְ� ���ſ� ������ ����
{
    if (one.v != two.v) return one.v > two.v;
    else return one.m > two.m;
}

Item item[300010];        // ������ ����
multiset<long long> bags;
bool use[300010];        // ���濡 ������ �� �ִ°�

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, k;
    double m, v;
    long long input, total = 0;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> item[i].m >> item[i].v;
    }
    sort(item, item + n, Compare);

    for (int i = 0; i < k; i++)
    {
        cin >> input;        // ������ �ִ� ���� ������
        bags.insert(input);
    }

    int index = 0;        // ���� ���� ū��

    for (int i = 0; i < n; i++)        // ������ �����鼭 
    {
        if (bags.lower_bound(item[index].m) == bags.end())        // ���԰� ���� �� �ִ°� ������
        {
            index++;
            continue;
        }

        total += item[index].v;

        bags.erase(bags.lower_bound(item[index].m));
        index++;
    }

    cout << total;
}