#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0;
	int arr[5];

	cin >> n;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i]; // 입력 받아주기
	}

	for (int i = 0; i < 5; i++)
	{
		if (n == arr[i]) // n에서 입력 받은 값과 i번의 값이 같다면
			cnt++; // 카운트 올려주기
	}

	cout << cnt;
}