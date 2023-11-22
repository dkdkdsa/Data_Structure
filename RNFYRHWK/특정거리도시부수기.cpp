#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main() {

	unordered_map<int, int> visMap;
	vector<vector<int>> citys;
	queue<int> visQ;
	vector<int> printVec;

	int cityNum, roadNum, len, start;

	cin >> cityNum >> roadNum >> len >> start;

	for (int i = 0; i < cityNum; i++) {

		citys.push_back({});

	}

	for (int i = 0; i < roadNum; i++) {

		int cityIDX, linkedCity;
		cin >> cityIDX >> linkedCity;

		citys[cityIDX - 1].push_back(linkedCity - 1);

	}

	visQ.push(start - 1);
	visMap[start - 1] = 1;

	while (!visQ.empty()) {

		int curIDX = visQ.front();
		visQ.pop();

		auto curVec = citys[curIDX];

		for (int i = 0; i < curVec.size(); i++) {

			if (visMap[curVec[i]] == 0) {

				visMap[curVec[i]] = visMap[curIDX] + 1;
				visQ.push(curVec[i]);

				if (visMap[curVec[i]] == len + 1) {

					printVec.push_back(curVec[i] + 1);

				}

			}

		}

	}

	sort(printVec.begin(), printVec.end());

	if (!printVec.empty()) {

		for (auto i : printVec) {

			cout << i << '\n';

		}

	}
	else {

		cout << -1;

	}

}