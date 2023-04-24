// 코딩테스트에서 시간 줄이는 법 (코딩테스트에서만 지향함)
// 1. endl vs \n
// 2. ios_base::sync_with_stdio(false);
// 3. cin.tie(nullptr), cout.tie(nullptr);


// 복잡도란? - 알고리즘의 성능을 나타내는 척도

// - 빅오 표기법 : 최악의 실행 시간을 표기
// - 오메가 표기법 : 최상의 실행 시간을 표기
// - 세타 표기법 : 평균 실행 시간을표기

// 시간 복잡도 - 특정한 크기의 입력에 대하여 알고리즘이 얼마나 오래 걸리는지를 의미

// 공간 복잡도 - 특정한 크기의 입력에 대하여 알고리즘이 얼마나 많은 메모리를 차지하는지를 의미

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
