#include <iostream>
#include <stack>
#include <string>

using namespace std;

int cnt, res;
string s;
stack<char> st;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> s;

    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] == '(') { // �� ����� ���� üũ���ֱ� 
            cnt++;
        }
        else {
            if (s[i - 1] == '(') { // () ��� �踷��� ���� -- ���ְ� ���� ������� ����� ��ŭ �����ֱ�
                cnt--;
                res += cnt;
            }
            else { // �׳� �踷��Ⱑ �����Ÿ� ���� --���ְ� ����� �ϳ� �� ���ֱ�
                cnt--;
                res++;
            }
        }
    }

    cout << res;
}
