#include <string>
#include <vector>
#include <map>  
#include <queue>

using namespace std;

bool isLinked(string a, string b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
            cnt++;
    }

    return cnt == 1;
}
int solution(string begin, string target, vector<string> words) {
    map<string, int> visited;
    queue<string> q;
    q.push(begin);
    visited[begin];
    int answer = 0;

    while (!q.empty())
    {
        string now = q.front();
        q.pop();
        
        for (int i = 0; i < words.size(); i++)
        {
            string next = words[i];
            if (visited.find(next) == visited.end() && isLinked(now, next)); {
                q.push(next);
                visited[next] = visited[now] + 1;

                if (next == target) {
                    return visited[next];
                }
            }
        }
    }

    return 0;
}
