#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr)
{
    queue<int>q;
    for (int i = 0; i < arr.size(); i++)
    {
        if (!q.empty() && q.back() == arr[i]) 
            continue;
        else q.push(arr[i]);

    }
    vector<int> answer;
    while (!q.empty())
    {
        answer.push_back(q.front());
        q.pop();
    }
    return answer;

}