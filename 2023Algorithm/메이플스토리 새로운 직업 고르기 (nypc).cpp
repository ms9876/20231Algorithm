#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k; // ���� ��, �غ� ���� ��
    cin >> n;

    vector<string> v; // ������ ���� ����
    vector<string> v1; // �غ� ������ ���� ���� 

    for (int i = 0; i < n; i++) { // ���� ���
        string str;
        cin >> str;
        v.push_back(str);
    }

    cin >> k;

    for (int i = 0; i < k; i++) { // �غ� ���� ���
        string str;
        cin >> str;
        v1.push_back(str);
    }

    vector<string> v2; // �ߺ��� Ȯ���ؼ� ����� ���ο� ����

    for (const string& i : v) { // �� ���� �� ��ŭ ���鼭
        if (find(v1.begin(), v1.end(), i) == v1.end()) { // v1�� �ߺ��Ǵ°� �ִ��� ������ Ȯ�����ֱ� 
            v2.push_back(i); // �ߺ��� �� �Ǵ°� ������ v2�� ����ֱ�
        }
    }

    cout << v2.size() << endl; // �� �غ� ���� ���� ���

    for (const string& i : v2) {
        cout << i << endl;  // �� �غ� ���� ���
    }
}
