#include <iostream>

using namespace std;

int main() {
	int n, k;
	int arr[10];
	int count = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; i--) { 
		while (k >= arr[i]) // ��ǥ������ �迭�ȿ� ���� �������� ����
		{
			k -= arr[i]; // i�� ��ŭ k���� ���ְ�
			count++; 
		}
	}

	cout << count;
}