#include <iostream>
#include <string>
#include <map>

using namespace std;

string tree;
map<string, int> cnt; // ���� �� �� ������ ������ map
int total = 0; // ��ü ���� ����

int main() {
    while (getline(cin, tree)) { // �� �پ� �Է¹���
        cnt[tree]++; // �ش� ���� �� ���� ����
        total++; // ��ü ���� ���� ����

        for (const auto& iter : tree) {
        }
    }
}