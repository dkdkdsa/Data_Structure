#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> iv;

	for (int i = 0; i < n; i++) {

		int res;
		cin >> res;

		iv.push_back(res);

	}

	sort(iv.begin(), iv.end());

	cout << iv.front() << " " << iv.back();

}