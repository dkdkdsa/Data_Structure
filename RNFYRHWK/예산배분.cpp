#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int gBang, YSan;

	cin >> gBang;

	vector<int> gVec;

	for (int i = 0; i < gBang; i++) {

		int res;
		cin >> res;

		gVec.push_back(res);

	}

	cin >> YSan;

	sort(gVec.begin(), gVec.end());

	int start = 1;
	int end = gVec.back();
	int result = 0;

	while (start <= end)
	{

		int mid = (start + end) / 2;
		int res = 0;

		for (auto item : gVec) {

			res += min(mid, item);

		}

		if (res <= YSan) {

			start = mid + 1;
			result = mid;

		}
		else {

			end = mid - 1;

		}

	}

	cout << result;

}