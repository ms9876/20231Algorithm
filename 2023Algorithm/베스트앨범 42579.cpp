//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//bool cam(pair<string, int>& left, pair<string, int>& right) {
//    if (left < right)
//        return true;
//    else
//        return false;
//}
//vector<int> solution(vector<string> genres, vector<int> plays) {
//    vector<int> answer;
//    unordered_map <string, int> totalPlay_m;
//    unordered_map <string, vector<pair<int, int>>> play_m;
//
//    for (int i = 0; i < genres.size(); i++)
//    {
//        totalPlay_m[genres[i]] += plays[i];
//        play_m[genres[i]].push_back({ plays[i], i });
//    }
//    vector<pair<string, int>> totalPlay_v{ totalPlay_m.begin(), totalPlay_m.end() };
//    sort(totalPlay_v.begin(), totalPlay_v.end(), cam);
//    sort(play_m.second.begin(), play_m.second.end());
//
//    return answer;
//}