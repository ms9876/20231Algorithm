#include <iostream>
#include <iostream>
#include <string>

using namespace std;

int cnt, res;
string n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n.size(); i++) 
    {
        if (n[i] == '(') { // �� ����� ���� üũ���ֱ� 
            cnt++;
        }
        else {
            if (n[i - 1] == '(') { // () ��� �踷��� ���� -- ���ְ� ���� ������� ����� ��ŭ �����ֱ�
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
