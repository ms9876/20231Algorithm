#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, input, now = 1;
    stack<int> s;        // �Ѹ� �� �� �ִ� ����
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == now) {        // �ٿ��� �ٷ� üũ
            now++;
        }
        else {
            s.push(input);        // �� ���� ���ڱ���
        }
        while (!s.empty() && s.top() == now)        // ���ڱ� ���� �ٷ� ���� �� �ִ� ���ΰ�
        {
            s.pop();
            now++;
        }
    }
    if (s.empty()) {        // ���ڱ��� ���� �ֳ� ���� �Ǵ��ؼ� ��������.
        cout << "Nice";
    }
    else
    {
        cout << "Sad";
    }
}