#include <iostream>

using namespace std;

int main() {
	int n, m, sum = 0, max = 0; // ���� ���, ź ���, ��, �ִ� ��� ��

	for (int i = 0; i < 4; i++)
	{
		cin >> n >> m;
		
		sum += m - n; // ź ������� ���� ��� ����

		if (sum > max) 
			max = sum;
	}

	cout << max;
}