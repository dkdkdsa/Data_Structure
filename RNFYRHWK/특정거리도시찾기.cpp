#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<queue>

using namespace std;

typedef struct City {

	vector<int> cityLoad;

};

int main() {

	int cityNum, loadNum, len, start;

	cin >> cityNum >> loadNum >> len >> start;
	
	vector<City> citys;
	unordered_map<int, int> visMap;
	
	//档矫 积己
	for (int i = 0; i < cityNum; i++) {

		citys.push_back({});

	}

	//辨 积己
	for (int i = 0; i < loadNum; i++) {

		int idx, linked;

		cin >> idx >> linked;

		citys[idx - 1].cityLoad.push_back(linked - 1);

	}

	queue<int> visQ;
	vector<int> printVec;

	visQ.push(start - 1);
	visMap[start - 1] = 1;

	while (!visQ.empty())
	{

		int idx = visQ.front();
		visQ.pop();

		auto mapLs = citys[idx].cityLoad;

		for (int i = 0; i < mapLs.size(); i++) {

			if (visMap[mapLs[i]] == 0) {

				visMap[mapLs[i]] = visMap[idx] + 1;
				visQ.push(mapLs[i]);

				if (visMap[mapLs[i]] == len + 1) {

					printVec.push_back(mapLs[i] + 1);

				}

			}

		}

	}
	sort(printVec.begin(), printVec.end(), less<int>());
	if (!printVec.empty()) {

		for (auto i : printVec) {

			cout << i << '\n';

		}

	}
	else
	{

		cout << -1;

	}

}