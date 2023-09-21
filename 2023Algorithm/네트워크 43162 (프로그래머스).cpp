#include <string>
#include <vector>

using namespace std;

bool vis[201]; // �湮�ߴ��� Ȯ�� ���� bool ����

void DFS(int num, int n, vector<vector<int>> computers) {
    vis[num] = true; // num�ε����� �湮�ߴٰ� ������ְ�

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false && computers[num][i] == 1) { // �湮 �� �߰ų� ��ǻ�Ͷ� ���� �Ǿ� ������
            DFS(i, n, computers); // DFS �ѹ� �� �����ֱ�
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