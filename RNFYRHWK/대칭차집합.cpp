#include<iostream>
#include<unordered_map>

using namespace std;

int main() {

	unordered_map<int, int> as;

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n + m; i++) {

		int res;
		cin >> res;

		as[res]++;

	}

	int ct = 0;

	for (auto item : as) {

		if (item.second == 1) {

			ct++;

		}

	}

	cout << ct;

}