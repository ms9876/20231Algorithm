#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n, numInput;
    double answer = 0;
    string input;
    vector<pair<char, int>> letterVec;        // ���ĺ��� �׿� �´� ����
    stack<double> me;        // mathematical expression (����)

    cin >> n >> input;

    // ���ĺ��� ���� ���� �Է¹ޱ�
    for (int i = 0; i < n; i++)
    {
        cin >> numInput;
        letterVec.push_back({ i + 65, numInput });
    }

    // ���ĺ��� ���� ������ ���� �����ؼ� �ֱ�
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= 65)
        {
            me.push(letterVec[input[i] - 65].second);
        }
        else
        {
            double temp = me.top();
            me.pop();
            switch (input[i])
            {
            case '*':        // *
                answer = me.top() * temp;
                break;
            case '+':        // +
                answer = me.top() + temp;
                break;
            case '-':        // -
                answer = me.top() - temp;
                break;
            case '/':        // /
                answer = me.top() / temp;
                break;
            default:
                cout << "��¡";
                break;
            }
            me.pop();
            me.push(answer);
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << answer;
}