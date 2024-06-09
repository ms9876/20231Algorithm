#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    float n, m;
    int land[501][501];
    long long originBlock, myBlock;

    int need, second;

    int minSecond = 100000001, maxHeight;

    cin >> n >> m >> originBlock;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> land[i][j];
        }
    }

    for (int i = 0; i < 257; i++)
    {
        myBlock = originBlock;
        need = second = 0;

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (land[j][k] > i)        // ���� ������ ũ�� ĳ�ֱ�
                {
                    myBlock += land[j][k] - i;
                    second += 2 * (land[j][k] - i);
                }
                else if (land[j][k] < i)        // ���� ������ ������ �ʿ��� �� ++
                {
                    need += i - land[j][k];
                }
            }
        }

        if (need > myBlock)        // ���� ���� ���� �ʿ��� ������ ������ �̹����� �Ұ���
        {
            continue;
        }
        else
        {
            second += need;
        }

        if (second <= minSecond)
        {
            minSecond = second;
            maxHeight = i;
        }
    }
    cout << minSecond << " " << maxHeight;
}