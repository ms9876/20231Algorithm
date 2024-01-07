#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, input, input2;
    stack<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == 1) {        // ���� 1�̸� ���ÿ� ������ �߰�����.
            cin >> input2;
        }

        switch (input)
        {
        case 1:        // 1�̸� �ֱ�
            s.push(input2);
            break;
        case 2:            // ���������� ��� �� ����. ������ -1
            if (!s.empty()) {
                cout << s.top();
                s.pop();
            }
            else {
                cout << -1;
            }
            break;
        case 3:            // ���ÿ� ������ ���
            cout << s.size();
            break;
        case 4:            // ������ ����ֳ� �ƴϳ�
            if (s.empty()) {
                cout << 1;
            }
            else {
                cout << 0;
            }
            break;
        case 5:        // ������ ���. ������ -1
            if (!s.empty()) {
                cout << s.top();
            }
            else {
                cout << -1;
            }
            break;
        }

        if (input != 1) {
            cout << '\n';
        }
    }
}