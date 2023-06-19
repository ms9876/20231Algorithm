#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    unordered_set<int> s = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (auto i : numbers) {
        s.erase(i);
    }

    for (auto i : s) {
        answer += i;
    }

    return answer;
}