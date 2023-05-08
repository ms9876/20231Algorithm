#include <iostream>
#include <string>
#include <map>

using namespace std;

string tree;
map<string, int> cnt; // 나무 종 별 개수를 저장할 map
int total = 0; // 전체 나무 개수

int main() {
    while (getline(cin, tree)) { // 한 줄씩 입력받음
        cnt[tree]++; // 해당 나무 종 개수 증가
        total++; // 전체 나무 개수 증가

        for (const auto& iter : tree) {
        }
    }
}