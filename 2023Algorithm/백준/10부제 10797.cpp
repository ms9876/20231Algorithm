#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0;
	int arr[5];

	cin >> n;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i]; // �Է� �޾��ֱ�
	}

	for (int i = 0; i < 5; i++)
	{
		if (n == arr[i]) // n���� �Է� ���� ���� i���� ���� ���ٸ�
			cnt++; // ī��Ʈ �÷��ֱ�
	}

	cout << cnt;
}