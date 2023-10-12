#include <string>
#include <unordered_set>

using namespace std;

unordered_set<char> n;

string solution(string my_string) {
    string answer = "";

    for (char c : n) {
        if (n.find(c) == n.end()) {
            answer += c;
            n.insert(c);
        }
    }

    return answer;
}