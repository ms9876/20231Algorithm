#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string str, bomb, answer, check;
    cin >> str >> bomb;
    for (int i = 0; i < str.size(); i++)
    {
        answer += str[i];
        if (str[i] == bomb.back() && answer.size() >= bomb.size())
        {
            check = "";
            for // ä���������� 
                if (check == bomb)
                    answer.erase(

                        // ä����������  );
        }
    }
    if (answer == "")
        cout << "FRULA";
    else
        cout << answer;
}