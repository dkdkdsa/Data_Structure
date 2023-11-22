#include <string>
#include <vector>
#include <unordered_map>
#include <string.h>
#include <sstream>

using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }

    return answer;
}

enum State {

    Enter,
    Lev,

};

class StateIn {

public:

    StateIn(State st, string s) {

        state = st;
        key = s;

    }

    State state;
    string key;

};

vector<string> solution(vector<string> record) {

    vector<string> answer;
    unordered_map<string, string> sm;
    vector<StateIn> mst;

    for (auto item : record) {

        auto vec = split(item, ' ');

        if (vec[0][0] == 'E') {

            mst.push_back(StateIn(State::Enter, vec[1]));
            sm[vec[1]] = vec[2];

        }
        else if (vec[0][0] == 'L') {

            mst.push_back(StateIn(State::Lev, vec[1]));
        }
        else if (vec[0][0] == 'C') {

            sm[vec[1]] = vec[2];

        }

    }

    for (auto item : mst) {

        if (item.state == State::Enter) {

            answer.push_back(sm[item.key] + "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.");

        }
        else {

            answer.push_back(sm[item.key] + "´ÔÀÌ ³ª°¬½À´Ï´Ù.");

        }

    }

    return answer;

}