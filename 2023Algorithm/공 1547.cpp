#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int a, b, m; 
    int arr[3] = { 1,2,3 }; // 배열 크기는 3 - 조건이 최대 3이라서

    cin >> m; // 몇번 바꿀건지
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b; // 서로 바꿀 위치 입력 받고
        swap(arr[a - 1], arr[b - 1]); // 그 두개 위치 바꾸기
    }
    for (int i = 0; i < 3; i++) 
    {
        if (arr[i] == 1) // 공이 있는 위치가 1이니까 1 찾아주고
            cout << i + 1; // 어디에 있는지 보여주기 위해서 i + 1해서 출력
    }
}
