#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n, k;

	cin.tie(NULL);

	cin >> n >> k;

	vector<int> vec;

	int res = 0;

	for (int i = 0; i < n; i++) {

		cin >> res;
		vec.push_back(res);

	}

	int size = vec.size();
	int cnt = 0;
	res = 0;

	for (int i = 0; i < size; i++) {

		cnt = k / vec[i];
		k -= cnt * vec[i];
		res += cnt;

	}

	if (k == 0) {

		cout << res;

	}
	else {

		cout << -1;

	}

}