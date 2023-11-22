#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> split(string str, char Delimiter) {
    istringstream iss(str);            
    string buffer;                      

    vector<string> result;


    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);              
    }

    return result;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {

    vector<int> answer;

    unordered_map<string, unordered_set<string>> reportList;
    unordered_map<string, int> reportedList = {};
    unordered_set<string> banList;


    for (int i = 0; i < report.size(); i++) {

        auto v = split(report[i], ' ');

        if (reportList[v[0]].find(v[1]) == reportList[v[0]].end()) {

            reportedList[v[1]]++;
            reportList[v[0]].insert(v[1]);

            if (reportedList[v[1]] >= k) {

                banList.insert(v[1]);

            }

        }

    }

    for (auto i : id_list) {
        int cnt = 0;
        for (auto j : reportList[i]) {

            if (banList.find(j) != banList.end()) {

                cnt++;

            }

        }
        answer.push_back(cnt);

    }

    return answer;

}