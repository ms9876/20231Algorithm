#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k; // 직업 수, 해본 직업 수
    cin >> n;

    vector<string> v; // 직업을 담을 벡터
    vector<string> v1; // 해본 직업을 담을 백터 

    for (int i = 0; i < n; i++) { // 직업 담기
        string str;
        cin >> str;
        v.push_back(str);
    }

    cin >> k;

    for (int i = 0; i < k; i++) { // 해본 직업 담기
        string str;
        cin >> str;
        v1.push_back(str);
    }

    vector<string> v2; // 중복을 확인해서 담아줄 새로운 백터

    for (const string& i : v) { // 총 직업 수 만큼 돌면서
        if (find(v1.begin(), v1.end(), i) == v1.end()) { // v1와 중복되는게 있는지 없는지 확인해주기 
            v2.push_back(i); // 중복이 안 되는게 있으면 v2에 담아주기
        }
    }

    cout << v2.size() << endl; // 안 해본 직업 개수 출력

    for (const string& i : v2) {
        cout << i << endl;  // 안 해본 직업 출력
    }
}
