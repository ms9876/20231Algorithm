#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";

    for (int i = 0; i < myString.size(); i++) {
        if ('A' <= myString[i] && myString[i] <= 'Z') {
            myString[i] += 32;
        }
    }

    answer = myString;

    return answer;
}