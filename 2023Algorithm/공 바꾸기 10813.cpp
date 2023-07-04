#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m; // n 바구니 수, m 몇 번 바꿀건지

    int* arr = new int[n]; // 동적 할당된 배열 초기화

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // 배열 안에 수 넣어주기
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        swap(arr[a - 1], arr[b - 1]); // 섞어
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' '; // 차례대로 인덱스 출력
    }
}
