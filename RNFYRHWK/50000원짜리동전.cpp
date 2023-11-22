#include <iostream>
#include <vector>

using namespace std;

int main() {

	int ncnt, k;

	cin >> ncnt >> k;

	vector<int> vec;

	for (int i = 0; i < ncnt; i++) {

		int res;

		cin >> res;

		vec.push_back(res);

	}

	int res = 0;
	int lCnt = 0;

	while (res != k)
	{

		for (int i = ncnt - 1; i >= 0; i--) {

			if (k - res >= vec[i]) {

				res += vec[i];
				lCnt++;
				break;

			}

		}

	}

	cout << lCnt;

}