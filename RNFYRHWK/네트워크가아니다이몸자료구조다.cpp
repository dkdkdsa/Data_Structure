#include <string>
#include <vector>
#include <set>

using namespace std;

int cnt = 0;

void NetworkFind(const int n, vector<vector<int>>& com, int idx, set<int> &connect) {

    connect.insert(idx);

    for (int i = 0; i < n; i++) {

        if (com[idx][i] == 1 && connect.find(i) == connect.end()) {

            cnt++;
            NetworkFind(n, com, i, connect);

        }

    }


}

int solution(int n, vector<vector<int>> computers) {

    set<int> vis;

    for (int i = 0; i < n; i++) {

        NetworkFind(n, computers, i, vis);

    }

    return n - cnt;

}