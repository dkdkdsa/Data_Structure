#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	int t;
	vector<int> vec;

	cin >> t;

	for (int i = 0; i < t; i++) {

		int res;

		cin >> res;

		vec.push_back(res);

	}

	sort(vec.begin(), vec.end());
	cin >> t;

	for (int i = 0; i < t; i++) {

		int res;
		cin >> res;

		int cnt = upper_bound(vec.begin(), vec.end(), res) - lower_bound(vec.begin(), vec.end(), res);

		cout << cnt << " ";

	}

}