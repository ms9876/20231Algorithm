#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

deque<int> Adq;
deque<int> Bdq;

int result;
string str;

int main() {
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        // A �� B �� ���
        if (str[i] == 'A') {
            Adq.push_back(i);
        }
        if (str[i] == 'B') {
            Bdq.push_back(i);
        }
        if (str[i] == 'C') {
            // c �� ������.... 
            if (!Bdq.empty() && Bdq.front() < i) {
                Bdq.pop_front();
                result++;
            }
        }
    }

    while (!Adq.empty() && !Bdq.empty()) {
        // ����ť �տ� �ִ°� < ��ť �տ� �ִ°�
        if (Adq.front() < Bdq.front()) {
            result++;
            Adq.pop_front();
            Bdq.pop_front();
        }
        else {        // ať �տ� �ִ� �� bť �տ� �ִ°�
            Bdq.pop_front();
        }
    }

    cout << result << endl;
}