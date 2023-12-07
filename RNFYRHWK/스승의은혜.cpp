#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool st(pair<int, int> l, pair<int, int> r) {

	if (l.first + l.second == r.first + r.second) {

		return l.first > r.first;

	}

	return l.first + l.second < r.first + r.second;

}

int main() {

	int n, b;

	cin >> n >> b;

	vector<pair<int, int>> vec;

	for (int i = 0; i < n; i++) {

		int a, b;
		cin >> a >> b;

		vec.push_back({ a, b });

	}

	sort(vec.begin(), vec.end(), st);

	int cnt = 0;
	bool coopon = true;

	for (auto i : vec) {

		if (i.first + i.second <= b) {

			b -= i.first + i.second;
			cnt++;

		}
		else if(i.first / 2 + i.second <= b && coopon) {

			coopon = false;
			b -= i.first / 2 + i.second;
			cnt++;

		}

	}

	cout << cnt;

}