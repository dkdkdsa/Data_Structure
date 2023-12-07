#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	vector<int> vec;
	vector<int> resV;

	for (int i = 0; i < 3; i++) {

		int res;
		cin >> res;
		vec.push_back(res);

	}

	for (int i = 0; i < vec.size(); i++) {

		resV.push_back(vec[i] * 1);

		for (int j = 0; j < vec.size(); j++) {

			if (j == i) continue;

			resV.push_back(vec[i] * vec[j]);

			for (int k = 0; k < vec.size(); k++) {

				if (k == j || k == i) continue;

				resV.push_back(vec[i] * vec[j] * vec[k]);

			}

		}

	}

	sort(resV.begin(), resV.end());

	for (auto iter = resV.rbegin(); iter != resV.rend(); iter++) {

		if (*iter % 2 == 1) {

			cout << *iter;
			return 0;

		}

	}

	cout << resV.back();

}