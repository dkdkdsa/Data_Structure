#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>

using namespace std;

void DFS(const vector<vector<int>>& vec, const int& startPos, unordered_set<int> &visSet, vector<int> &printVec, const int size) {

	printVec.push_back(startPos + 1);
	visSet.insert(startPos);

	for (int i = 0; i < size; i++) {

		if (startPos == i) continue; //이 아이는 어차피 true이니까

		//방문 안했다면?
		if (visSet.find(i) == visSet.end() && vec[startPos][i] == 1) {

			DFS(vec, i, visSet, printVec, size);

		}

	}

}

vector<int> BFS(const vector<vector<int>>& vec, const int& startPos, const int size) {

	vector<int> printVec;
	queue<int> visQ;
	unordered_set<int> visSet;

	visQ.push(startPos);
	visSet.insert(startPos);

	while (!visQ.empty())
	{

		int cnt = visQ.front();
		visQ.pop();
		
		printVec.push_back(cnt + 1);

		for (int i = 0; i < size; i++) {

			if (i == cnt) continue;

			if (visSet.find(i) == visSet.end() && vec[cnt][i] == 1) {

				visSet.insert(i);
				visQ.push(i);

			}

		}

	}

	return printVec;

}

int main() {


	int nodeCnt, vetCnt, startNum;

	cin >> nodeCnt >> vetCnt >> startNum;

	vector<vector<int>> mapVec(nodeCnt, vector<int>(nodeCnt, 0));

	for (int i = 0; i < vetCnt; i++) {

		int x, y;
		cin >> x >> y;

		mapVec[x - 1][y - 1] = 1;
		mapVec[y - 1][x - 1] = 1;

	}

	unordered_set<int> dfsVisSet;
	vector<int> dfsPrint;

	DFS(mapVec, startNum - 1, dfsVisSet, dfsPrint, nodeCnt);

	for (auto i : dfsPrint) {

		cout << i << " ";

	}

	cout << endl;

	for (auto i : BFS(mapVec, startNum - 1, nodeCnt)) {

		cout << i << " ";

	}

}