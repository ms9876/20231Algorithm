// https://www.acmicpc.net/problem/10101

#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	
	cin >> a >> b >> c;

	if (a == 60 && b == 60 && c == 60) // �� ���� ��� 60�� �� ��
		cout << "Equilateral";
	else if (a + b + c == 180) { 
		if (a == b || b == c || c == a) { // �� ���� ���� 180�̸鼭 �� ���� ������
			cout << "Isosceles";
		}
		else if (a != b || b != c || c != a) { // �� ���� ���� 180�̸鼭 �� ���� �� �ٸ���
			cout << "Scalene";
		}
	}

	else { // 3���� ũ�Ⱑ ��� �ٸ���
		cout << "Error";
	}
}