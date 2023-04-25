#include <iostream>
#include <string>
#include <map>
using namespace std;

//#pragma region �� �ڵ�
//int testcase, n, result;   // testcase: �׽�Ʈ ���̽� ��, n: �� �׽�Ʈ ���̽��� �±� ��, result: �� �׽�Ʈ ���̽��� �����
//string name, tag;          // name: �±��� �̸�, tag: �±��� ����
//map<string, int> m;        // �� �ڷᱸ���� �̿��Ͽ� �� �±װ� ��Ÿ�� Ƚ���� ���
//
//int main() {
//	cin >> testcase;
//
//	for (int i = 0; i < testcase; i++) {
//		cin >> n;
//
//		for (int j = 0; j < n; j++) {
//			cin >> name >> tag;
//
//			m[tag] = j;
//
//		}
//	}
//
//}
//#pragma endregion

#pragma region ������ �ڵ�
int testcase, s, result;
string name, tag;
map<string, int> m;
int main() {
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        result = 1;
        cin >> s;
        for (int i = 0; i < s; i++)
        {
            cin >> name >> tag;
            m[tag]++;
        }
        for (const auto& iter : m)
        {
            result *= (iter.second +1);
        }
        cout << result - 1 << '\n';
        m.clear();
    }
}
#pragma endregion

