#include <iostream>
using namespace std;

int main() {
    int n, input, answer = 0;
    bool is_Prime = false;        // �Ҽ� Ȯ��
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> input;
        if (input == 1) continue;
        if (input == 2) is_Prime = true;        // 1 �� 2 �϶� �̸� Ȯ��
        for (int j = 2; j < input; j++)
        {
            if (input % j == 0)
            {
                is_Prime = false;
                break;
            }
            else is_Prime = true;
        }        // �ڱ� �ڽű��� ���� �����߿��� 
        if (is_Prime) answer++;
        is_Prime = false;
    }
    cout << answer;
}