#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main() {

	int cityNum, roadNum, len, start;

	cin >> cityNum >> roadNum >> len >> start;

	vector<vector<int>> vec(cityNum, vector<int>(0, 0));
	queue<int> visQ;
	unordered_map<int, int> visSet;


	for (int i = 0; i < roadNum; i++) {

		int city, connect;
		cin >> city >> connect;

		vec[city - 1].push_back(connect - 1);

	}

	visQ.push(start - 1);
	visSet[start - 1] = 1;

	vector<int> printVe;

	while (!visQ.empty())
	{

		auto curIdx = visQ.front();
		visQ.pop();

		for (int i = 0; i < vec[curIdx].size(); i++) {

			if (visSet[vec[curIdx][i]] == 0) {

				visSet[vec[curIdx][i]] = visSet[curIdx] + 1;
				visQ.push(vec[curIdx][i]);

				if (visSet[vec[curIdx][i]] == len + 1) {

					printVe.push_back(vec[curIdx][i] + 1);

				}

			}

		}

	}

	if (printVe.empty()) {

		cout << -1;
		return 0;

	}

	sort(printVe.begin(), printVe.end());

	for (auto i : printVe) {

		cout << i << endl;

	}

}