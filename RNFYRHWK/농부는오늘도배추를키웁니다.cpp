#include<iostream>
#include<vector>
#include<set>

using namespace std;

void FIND(int W, int H, const vector<vector<int>>& vec, set<pair<int, int>> &visSet) {

	int cnt = 0;

	for (int x = 0; x < W; x++) {

		for (int y = 0; x < H; x++) {

			if (visSet.find({ x, y }) == visSet.end()) {



			}

		}

	}

}

void GLog2() {

	int W, H, num;
	cin >> W >> H >> num;

	vector<vector<int>> vec(W, vector<int>(H, 0));

	for (int i = 0; i < num; i++) {

		int x, y;
		cin >> x >> y;

		vec[x][y] = 1;

	}



}

int main() {

	int tCase;
	cin >> tCase;

	for (int i = 0; i < tCase; i++) {

		GLog2();

	}

}