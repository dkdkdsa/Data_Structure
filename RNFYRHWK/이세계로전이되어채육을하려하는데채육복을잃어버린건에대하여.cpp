#include <string>
#include <vector>
#include <algorithm>
#include<iostream>
#include<set>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {

    int answer = 0;
    set<int> sets;

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (int i : reserve) {

        sets.insert(i);

    }

    for (int i : reserve) {


        for (int j = 0; j < lost.size(); j++) {

            if (i == *(lost.begin() + j)) {

                lost.erase(lost.begin() + j);
                break;

            }

            if((i + 1 == *(lost.begin() + j) || i - 1 == *(lost.begin() + j)) && sets.find(*(lost.begin() + j)) == sets.end())
            {
            
                lost.erase(lost.begin() + j);
                break;

            }

        }

    }

    return n - lost.size();


}
