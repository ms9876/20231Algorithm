#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool com(int a, int b)
{
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int t, n, m, input;        // 테스트 케이스, 문서의 개수, 찾는 문서 인덱스, 문서 입력 받기 변수
    int my, answer = 0;            // 내 문서의 중요도, 출력 순서
    queue<int> print, sortPrint;
    vector<int> sortVec;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        for (int j = 0; j < n; j++)
        {
            cin >> input;
            sortVec.push_back(input);
            print.push(input);
            if (j == m)
            {
                my = input;        // 내 문서의 중요도 가져오기
            }
        }

        sort(sortVec.begin(), sortVec.end(), com);
        for (int j = 0; j < sortVec.size(); j++)
        {
            sortPrint.push(sortVec[j]);
        }

        while (!print.empty())        // 프린터가 빌 때까지
        {
            if (print.front() == sortPrint.front())        // 앞에꺼가 정렬된 큐랑 같니?
            {
                m--;
                answer++;
                if (print.front() == my && m == -1) break;
                if (m == -1) m = print.size() - 1;
                print.pop();
                sortPrint.pop();        // 서로 다 빼주기
            }
            else
            {
                print.push(print.front());
                print.pop();
                m--;
                if (m == -1) m = print.size() - 1;
            }
        }

        cout << answer << '\n';

        answer = 0;
        while (!print.empty())
        {
            print.pop();
        }
        while (!sortPrint.empty())
        {
            sortPrint.pop();
        }
        sortVec.clear();
    }
}