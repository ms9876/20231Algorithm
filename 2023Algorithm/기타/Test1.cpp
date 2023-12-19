#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector <int> v;

int b(int x) {
	int left = 0, right = n - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (v[mid] < x)
			return 1;
	}
}

int main() {

}