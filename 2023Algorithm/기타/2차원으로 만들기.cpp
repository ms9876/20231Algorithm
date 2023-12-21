#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    vector<int> v(n * k);
    
    for (int i = 0; i < n * k; ++i) {
        std::cin >> v[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << v[i * k + j] << " ";
        }
        cout << endl;
    }
}
