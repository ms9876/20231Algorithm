#include <iostream>
#include <string>
#include <map>
using namespace std;

//#pragma region 내 코드
//int testcase, n, result;   // testcase: 테스트 케이스 수, n: 각 테스트 케이스의 태그 수, result: 각 테스트 케이스의 결과값
//string name, tag;          // name: 태그의 이름, tag: 태그의 종류
//map<string, int> m;        // 맵 자료구조를 이용하여 각 태그가 나타난 횟수를 기록
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

#pragma region 선생님 코드
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

