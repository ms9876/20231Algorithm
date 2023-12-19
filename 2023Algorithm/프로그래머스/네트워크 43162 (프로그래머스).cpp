#include <string>
#include <vector>

using namespace std;

bool vis[201]; // 방문했는지 확인 해줄 bool 변수

void DFS(int num, int n, vector<vector<int>> computers) {
    vis[num] = true; // num인덱스를 방문했다고 만들어주고

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false && computers[num][i] == 1) { // 방문 안 했거나 컴퓨터랑 연결 되어 있으면
            DFS(i, n, computers); // DFS 한번 더 돌려주기
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;

    for (int i = 0; i < n; i++) { 
        if (vis[i] == false) {
            DFS(i, n, computers);
            answer++;
        }
    }
    return answer;
}