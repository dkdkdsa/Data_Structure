#include <string>
#include <vector>
#include <queue>

using namespace std;

int FindMax(vector<int> priorities) {

    int re = 0;

    for (int i = 0; i < priorities.size(); i++) {

        if (re < priorities[i]) {

            re = priorities[i];

        }

    }

    return re;

}

int solution(vector<int> priorities, int location) {

    queue<int> save;                         
    vector<int> result;           

    for (int i = 0; i < priorities.size(); i++) {

        save.push(i);

    }

    while (!save.empty()) {

        int idx = save.front();
        save.pop();

        if (priorities[idx] != FindMax(priorities)) {

            save.push(idx);

        }
        else {

            result.push_back(idx);
            priorities[idx] = 0;

        }
    }

    for (int i = 0; i < result.size(); i++) {

        if (result[i] == location) return i + 1;

    }

}