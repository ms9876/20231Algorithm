#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string input;
    stack<char> s;

    while (getline(cin, input))            // �Է� ����ؼ� �ޱ�
    {
        if (input == ".") break;        // �� ������ �׸�.

        for (int i = 0; i < input.size(); i++)        // ���ÿ� �ְ� ���� �ϴ°�
        {
            if (input[i] == '(' || input[i] == '[') s.push(input[i]);
            else if (!s.empty())
            {
                if ((input[i] == ')' && s.top() == '(') || (input[i] == ']' && s.top() == '[')) s.pop();
                else if (input[i] == ']' || input[i] == ')') s.push(input[i]);
            }
            else if (input[i] == ']' || input[i] == ')') s.push(input[i]);
        }

        if (s.empty()) cout << "yes\n";
        else cout << "no\n";            // ������

        while (!s.empty())        // ���� �ʱ�ȭ
        {
            s.pop();
        }
    }
}