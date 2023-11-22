#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>

using namespace std;

#define var auto
#define in :

struct DDTT
{

    int index, show;

};

bool IIII(pair<string, int> i, pair<string, int> j) { return i.second > j.second; }
bool DDST(DDTT i, DDTT j) { return i.show > j.show; }



vector<int> solution(vector<string> genres, vector<int> plays) {


    vector<int> answer;
    unordered_map<string, pair<int, vector<DDTT>>> m;
    unordered_set<string> keys;
    
    for (var i = 0; i < genres.size(); i++) {

        m[genres[i]].first += plays[i];
        m[genres[i]].second.push_back({ i, plays[i] });
        
        if (keys.find(genres[i]) == keys.end()) {

            keys.insert(genres[i]);

        }

    }

    vector<pair<string, int>> vaefadsfasd;

    for (var item in keys) {

        vaefadsfasd.push_back({ item, m[item].first });

    }

    sort(vaefadsfasd.begin(), vaefadsfasd.end(), IIII);

    for (var item in vaefadsfasd) {

        int cnt = 0;
        var n = m[item.first].second;

        sort(n.begin(), n.end(), DDST);

        for (var i in n) {

            cnt++;
            if (cnt > 2) break;
            answer.push_back(i.index);

        }

    }

    return answer;

}