#include <string>
#include <vector>

using namespace std;

bool visited[201];

void DFS(int num, int n, vector<vector<int>> computers) {
    visited[num] = true;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false && computers[num][i] == 1) {
            DFS(i, n, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;

    for (int i = 0; i < n; i++) { 
        if (visited[i] == false) {
            DFS(i, n, computers);
            answer++;
        }
    }
    return answer;
}