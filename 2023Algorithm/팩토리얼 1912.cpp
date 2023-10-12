#include <iostream>
using namespace std;

int n;
int F5(int n)
{
	if (n <= 2)
		return 1;
	else {
		return F5(n - 1) + F5(n - 2);
	}
}

int main() {
	cout << "몇번째 수가 알고 싶으십니까? : ";
	cin >> n;

	cout << F5(n) << "입니다";
}