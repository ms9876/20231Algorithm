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
            for // 盲况持栏技夸 
                if (check == bomb)
                    answer.erase(

                        // 盲况持栏技夸  );
        }
    }
    if (answer == "")
        cout << "FRULA";
    else
        cout << answer;
}