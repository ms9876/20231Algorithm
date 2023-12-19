#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<char> v;

    for (int i = 0; i < s.size(); i++)
    {
        v.push_back(s[i]);
    }

    for (int i = 0; i < s.size(); i++)
    {
        bool find = true;
        stack<char> stk;

        for (int j = 0; j < v.size(); j++)
        {
            int idx = j;

            if (stk.empty())
            {
                if (v[idx] == '[' || v[idx] == '{' || v[idx] == '(')
                {
                    stk.push(v[idx]);
                }
                else
                {
                    find = false;
                    break;
                }
            }
            else
            {
                if (v[idx] == '[' || v[idx] == '{' || v[idx] == '(')
                {
                    stk.push(v[idx]);
                }
                else if (v[idx] == ']')
                {
                    if (stk.top() == '[')
                    {
                        stk.pop();
                    }
                    else
                    {
                        find = false;
                        break;
                    }
                }
                else if (v[idx] == ')')
                {
                    if (stk.top() == '(')
                    {
                        stk.pop();
                    }
                    else
                    {
                        find = false;
                        break;
                    }
                }
                else if (v[idx] == '}')
                {
                    if (stk.top() == '{')
                    {
                        stk.pop();
                    }
                    else
                    {
                        find = false;
                        break;
                    }
                }
            }
        }
        if (stk.empty() && find == true)
            answer++;
    }

    return answer;
}
