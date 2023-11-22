#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;
#define in :
int main() {

	unordered_map<int, int> visMap;
	queue<int> visQ;
	vector<int> printVec;

	int cityNum, roadNum, len, start;

	cin >> cityNum >> roadNum >> len >> start;
	vector<vector<bool>> citys(cityNum, vector<bool>(0, false));
	for (int i = 0; i < roadNum; i++) {

		int cityA, cityB;
		cin >> cityA >> cityB;

		citys[cityA][cityB] = 1;

	}

	visQ.push(start - 1);
	visMap[start - 1] = 1;
	
	while (!visQ.empty())
	{

		auto curIdx = visQ.front();
		visQ.pop();

		for (int i = 0; i < curIdx; i++) {

			if (citys[curIdx][i] == 1 && visMap[i] == 0) {

				visMap[i] = visMap[curIdx] + 1;
				visQ.push(i);

				if (visMap[curIdx] == len + 1) {

					printVec.push_back(curIdx + 1);

				}

			}

		}

	}

	sort(printVec.begin(), printVec.end());

	for (auto i in printVec) {

		cout << i << endl;

	}

}