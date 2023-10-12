#include <iostream>
#include <queue>
#include <vector>
#include <deque>
using namespace std;
deque<int> card;
int n;
vector<int> v;
int main() {
	cin >> n;

	v.resize(n);

	for (int i = n -1; i >= 0; i--) {
		cin >> v[i];
	}
	/*int vn;
	for (int i = 0; i < vn; i++) {
		cin >> vn;
		v.push_back(vn);
	}*/

	for (int i = 0; i < n; i++) {
		if (v[i] == 1) {
			card.push_front(i + 1);
		}
		else if (v[i] == 2) {
			int temp = card.front();
			card.pop_front();
			card.push_front(i + 1);
			card.push_front(temp);
		}
		else {
			card.push_back(i + 1);
		}
	}
	deque<int>::iterator iter = card.begin();
	for (; iter != card.end(); iter++) {
		cout << *iter << ' ';
	}

}