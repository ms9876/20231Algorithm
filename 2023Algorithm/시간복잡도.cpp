// �ڵ��׽�Ʈ���� �ð� ���̴� �� (�ڵ��׽�Ʈ������ ������)
// 1. endl vs \n
// 2. ios_base::sync_with_stdio(false);
// 3. cin.tie(nullptr), cout.tie(nullptr);


// ���⵵��? - �˰����� ������ ��Ÿ���� ô��

// - ��� ǥ��� : �־��� ���� �ð��� ǥ��
// - ���ް� ǥ��� : �ֻ��� ���� �ð��� ǥ��
// - ��Ÿ ǥ��� : ��� ���� �ð���ǥ��

// �ð� ���⵵ - Ư���� ũ���� �Է¿� ���Ͽ� �˰����� �󸶳� ���� �ɸ������� �ǹ�

// ���� ���⵵ - Ư���� ũ���� �Է¿� ���Ͽ� �˰����� �󸶳� ���� �޸𸮸� �����ϴ����� �ǹ�

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	string str;
	clock_t start = 0, end;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		// str += "X";
			str = str + "X";
	}
	end = clock();
	cout << end - start << endl;
	return 0;

	
}
