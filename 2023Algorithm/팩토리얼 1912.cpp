#include <iostream>
using namespace std;

int s;
int F5(int n)
{
	if (n <= 2)
		return 1;
	else {
		return F5(n - 1) + F5(n - 2);
	}
}

int main() {
	cout << "���° ���� �˰� �����ʴϱ�? : ";
	cin >> s;

	cout << F5(s) << "�Դϴ�";
}