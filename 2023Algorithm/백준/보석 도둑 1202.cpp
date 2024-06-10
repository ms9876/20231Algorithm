#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

struct Item
{
    long long m, v;        // 무게, 가치
};

bool Compare(Item one, Item two)        // 가치있고 무거운 순으로 정렬
{
    if (one.v != two.v) return one.v > two.v;
    else return one.m > two.m;
}

Item item[300010];        // 보석의 갯수
multiset<long long> bags;
bool use[300010];        // 가방에 보석이 들어가 있는가

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
        cin >> input;        // 가방의 최대 무게 얻어오기
        bags.insert(input);
    }

    int index = 0;        // 보석 가장 큰거

    for (int i = 0; i < n; i++)        // 보석을 돌리면서 
    {
        if (bags.lower_bound(item[index].m) == bags.end())        // 무게가 넣을 수 있는게 없으면
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