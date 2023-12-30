#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[10001] = { 0 };

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[a] += 1;
    }

    for (int i = 1; i < 10001; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << i << '\n';
        }
    }

}

#pragma region vector로 풀어서 정렬했으나 메모리 초과가 뜸
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	int n, m;
//	cin >> n;
//
//	vector<int> v(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> m;
//		v.push_back(m);
//	}
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << v[i] << '\n';
//	}
//}
#pragma endregion

