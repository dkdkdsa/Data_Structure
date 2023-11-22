#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>
using namespace std;
struct music
{
    int index, show;
};
bool cmp1(pair<string, pair<int, vector<music>>>& left, pair<string, pair<int, vector<music>>>& right)
{
    return left.second.first > right.second.first;
}
bool cmp2(music left, music right)
{

    if (left.show == right.show)
        return left.index < right.index;
     return left.show > right.show;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, pair<int, vector<music>>> total_m; // 장르, 총재생수, 곡 번호, 곡 재생수

    for (auto i = 0; i < genres.size(); i++) {
        total_m[genres[i]].first += plays[i];
        total_m[genres[i]].second.push_back({ i, plays[i] });
    }

    vector<pair<string, pair<int, vector<music>>>> total_v{ total_m.begin(), total_m.end() };

    sort(total_v.begin(), total_v.end(), cmp1); // 장르별 총 재생수 내림차순 정렬
    for (auto item : total_v) {

        int cnt = 0;
        sort(item.second.second.begin(), item.second.second.end(), cmp2); // 장르별 곡 재생수 내림차순 정렬
        for (auto i : item.second.second) {
            cnt++;
            if (cnt > 2) break;
            answer.push_back(i.index);
        }
    }
    return answer;
}