#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int a, b, m; 
    int arr[3] = { 1,2,3 }; // �迭 ũ��� 3 - ������ �ִ� 3�̶�

    cin >> m; // ��� �ٲܰ���
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b; // ���� �ٲ� ��ġ �Է� �ް�
        swap(arr[a - 1], arr[b - 1]); // �� �ΰ� ��ġ �ٲٱ�
    }
    for (int i = 0; i < 3; i++) 
    {
        if (arr[i] == 1) // ���� �ִ� ��ġ�� 1�̴ϱ� 1 ã���ְ�
            cout << i + 1; // ��� �ִ��� �����ֱ� ���ؼ� i + 1�ؼ� ���
    }
}
