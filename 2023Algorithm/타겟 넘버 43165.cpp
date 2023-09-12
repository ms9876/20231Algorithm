#include <string>
#include <vector>

using namespace std;

int answer = 0;
int targetNum;
int sum = 0;
vector<int> v;


void DFS(int n, char sign, int sum) {
    if (sign == '+')
        sum += v[n];
    else
        sum -= v[n];

    if (n + 1 == v.size()) {
        if (targetNum == sum) {
            answer++;
        }
        return;
    }
    DFS(n + 1, '+', sum);
    DFS(n + 1, '-', sum);
}

int solution(vector<int> numbers, int target) {
    targetNum = target;
    v = numbers;
    DFS(0, '+', 0);
    DFS(0, '-', 0);
    return answer;
}