#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool comp(string a, string b) {
    if (a.length() < b.length())
        return true;
    else if (a.length() == b.length()) {
        if (a < b) {
            return true;
        }
    }
    return false;
}
vector<int> solution(vector<string> words, vector<string> queries) {
    vector<int> answer;
    // words : 우리가 가진 단어, queries : 분석해야 하는 단어
    vector<string> revwords = words;

    for (int i = 0; i < revwords.size(); i++) 
        reverse(revwords[i].begin(), revwords[i].end()); // 글자를 뒤짚

    // 이진 탐색을 위한 정렬*길이가 길면 뒤로, 같으면 오름차순)
    sort(words.begin(), words.end(), comp);
    sort(revwords.begin(), revwords.end(), comp);

    for (int i = 0; i < queries.size(); i++) {
        int low, high, idx;
        string strquery = queries[i];

        // 솔루션 => ??인 곳에 a와 z를 넣을거임
        // 2가지로 나눠짐
        // 1. ?로 시작하는 경우
        if (strquery[0] == '?') { // "????o"
            reverse(strquery.begin(), strquery.end()); //"o????" => oaaaa
            idx = strquery.find('?'); // idx = 1

            for (int j = idx; j < strquery.size(); j++) {
                strquery[j] = 'a';
            }
            // lower_bound는 찾으려는 값 이상의 값이 처음 나타나는 위치
            low = lower_bound(revwords.begin(), revwords.end(), strquery, comp) - revwords.begin();

            for (int j = idx; j < strquery.size(); j++) {
                strquery[j] = 'z';
            }
            // lower_bound는 찾으려는 값 이상의 값이 처음 나타나는 위치
            high = upper_bound(revwords.begin(), revwords.end(), strquery, comp) - revwords.begin();
        }
        // 2. 그게 아닌 경우
        else {
            idx = strquery.find('?');
            for (int j = idx; j < strquery.size(); j++) {
                strquery[j] = 'a';
            }
            low = lower_bound(words.begin(), words.end(), strquery, comp) - words.begin();

            for (int j = idx; j < strquery.size(); j++) {
                strquery[j] = 'z';
            }
            low = upper_bound(words.begin(), words.end(), strquery, comp) - words.begin();
        }
        answer.push_back(high - low);
    }

    return answer;
}

int main() {
    vector<string> words;
    vector<string> queries;

    words.push_back("frodo");
    words.push_back("front");
    words.push_back("frost");
    words.push_back("frozen");
    words.push_back("frame");
    words.push_back("kakao");
    sort(words.begin(), words.end(), comp);
    queries.push_back("fro??");
    queries.push_back("????o");
    queries.push_back("fr???");
    queries.push_back("fro???");
    queries.push_back("pro?");

    solution(words, queries);
    vector<int>::iterator iter;
    
}