#include <iostream>

using namespace std;

int main() {
    int input, now = 40;        // now�� - ������ �������� �����
    for (int i = 0; i < 10; i++)
    {
        cin >> input;
        switch (input)
        {
        case 1:
            now++;        // �����
            break;
        case 2:
            now += 2;        // �ڷ� ����
            break;
        case 3:
            now--;            // ������
            break;
        }
    }

    switch (now % 4)
    {
    case 0:
        cout << "N";        // ����
        break;
    case 1:
        cout << "E";        // ����
        break;
    case 2:
        cout << "S";        // ����
        break;
    case 3:
        cout << "W";        // ����
        break;
    }
}