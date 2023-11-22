#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int k;

	cin >> k;

	vector<vector<int>> vec(k, vector<int>(10, 0));

	for (int i = 0; i < k; i++) {

		for (int h = 0; h < 10; h++) {

			int re;
			cin >> re;

			vec[i][h] = re;

		}

		sort(vec[i].begin(), vec[i].end());

	}


	for (int i = 0; i < k; i++) {


		cout << vec[i][10 - 3] << endl;

	}

}