#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m; // n �ٱ��� ��, m �� �� �ٲܰ���

    int* arr = new int[n]; // ���� �Ҵ�� �迭 �ʱ�ȭ

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // �迭 �ȿ� �� �־��ֱ�
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        swap(arr[a - 1], arr[b - 1]); // ����
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' '; // ���ʴ�� �ε��� ���
    }
}
