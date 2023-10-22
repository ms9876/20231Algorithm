#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> um;

    for (int i = 0; i < clothes.size(); i++)
    {
        um[clothes[i][1]] += 1;
    }
    int answer = 1;
    for (auto n : um) {
        answer *= (n.second + 1);
    }
    return answer - 1;
}

int main() {
    



    solution({ {"yellow_hat", "headgear"}, { "blue_sunglasses", "eyewear"}, { "green_turban", "headgear"} });
    solution({ {"crow_mask", "face"}, { "blue_sunglasses", "face"}, { "smoky_makeup", "face"} });
}