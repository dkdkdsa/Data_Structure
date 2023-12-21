#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	vector<int> vec;

	for (int i = 0; i < N; i++) {

		int re;
		cin >> re;
		vec.push_back(re);

	}

	int curT = 0;
	int resT = 0;

	sort(vec.begin(), vec.end());

	for (auto i : vec) {

		resT += i + curT;
		curT += i;

	}

	cout << resT;

}