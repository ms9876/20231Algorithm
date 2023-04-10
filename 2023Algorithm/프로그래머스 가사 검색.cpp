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
    // words : �츮�� ���� �ܾ�, queries : �м��ؾ� �ϴ� �ܾ�
    vector<string> revwords = words;

    for (int i = 0; i < revwords.size(); i++) 
        reverse(revwords[i].begin(), revwords[i].end()); // ���ڸ� ��¤

    // ���� Ž���� ���� ����*���̰� ��� �ڷ�, ������ ��������)
    sort(words.begin(), words.end(), comp);
    sort(revwords.begin(), revwords.end(), comp);

    for (int i = 0; i < queries.size(); i++) {
        int low, high, idx;
        string strquery = queries[i];

        // �ַ�� => ??�� ���� a�� z�� ��������
        // 2������ ������
        // 1. ?�� �����ϴ� ���
        if (strquery[0] == '?') { // "????o"
            reverse(strquery.begin(), strquery.end()); //"o????" => oaaaa
            idx = strquery.find('?'); // idx = 1

            for (int j = idx; j < strquery.size(); j++) {
                strquery[j] = 'a';
            }
            // lower_bound�� ã������ �� �̻��� ���� ó�� ��Ÿ���� ��ġ
            low = lower_bound(revwords.begin(), revwords.end(), strquery, comp) - revwords.begin();

            for (int j = idx; j < strquery.size(); j++) {
                strquery[j] = 'z';
            }
            // lower_bound�� ã������ �� �̻��� ���� ó�� ��Ÿ���� ��ġ
            high = upper_bound(revwords.begin(), revwords.end(), strquery, comp) - revwords.begin();
        }
        // 2. �װ� �ƴ� ���
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