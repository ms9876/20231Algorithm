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
        if (n[i] == '(') { // 쇠 막대기 개수 체크해주기 
            cnt++;
        }
        else {
            if (n[i - 1] == '(') { // () 라면 쇠막대기 개수 -- 해주고 최종 결과값에 막대기 만큼 더해주기
                cnt--;
                res += cnt;
            }
            else { // 그냥 쇠막대기가 끝난거면 개수 --해주고 결과에 하나 더 해주기
                cnt--;
                res++;
            }
        }
    }

    cout << res;
}
