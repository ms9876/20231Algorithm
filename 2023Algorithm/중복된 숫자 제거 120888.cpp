#include <string>
#include <unordered_set>

using namespace std;

unordered_set<char> s;

string solution(string my_string) {
    string answer = "";

    for (char c : s) {
        if (s.find(c) == s.end()) {
            answer += c;
            s.insert(c);
        }
    }

    return answer;
}