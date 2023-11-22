#include <iostream>
#include <queue>
#include <set>

using namespace std;

void DFS(const vector<vector<int>>& vec, set<pair<int, int>>& vis, pair<int, int> point, const int W, const int H) {

	int dirX[] = { 0, 1, 0, -1 };
	int dirY[] = { 1, 0, -1, 0 };
	queue<pair<int, int>> mq;
	mq.push(point);

	while (!mq.empty())
	{
		
		point = mq.front();
		mq.pop();

		for (int i = 0; i < 4; i++) {


			int nx = point.first + dirX[i];
			int ny = point.second + dirY[i];

			if (nx >= W || ny >= H || nx < 0 || ny < 0) continue;

			if (vis.find({ nx, ny }) == vis.end() && vec[ny][nx] == 1) {

				vis.insert({ nx, ny });
				mq.push({ nx, ny });

			}

		}

	}

}

int GLong2(const int W, const int H, const int posCt) {

	auto vec = vector<vector<int>>(H, vector<int>(W, 0));
	auto vis = set<pair<int, int>>();
	int glong2Cnt = 0;

	for (int i = 0; i < posCt; i++) {

		int x, y;
		cin >> x >> y;

		vec[y][x] = 1;

	}

	for (int y = 0; y < H; y++) {

		for (int x = 0; x < W; x++) {

			if (vec[y][x] == 1 && vis.find({ x, y }) == vis.end()) {

				vis.insert({ x,y });
				glong2Cnt++;
				DFS(vec, vis, { x, y }, W, H);

			}

		}

	}

	return glong2Cnt;

}

int main() {


	int tCase;

	cin >> tCase;

	vector<int> outVec;

	for (int i = 0; i < tCase; i++) {

		int w, h, posCt;

		cin >> w >> h >> posCt;

		outVec.push_back(GLong2(w, h, posCt));


	}

	for (auto i : outVec) {

		cout << i << endl;

	}

}