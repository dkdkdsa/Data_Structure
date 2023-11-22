#include<iostream>
#include<algorithm>
#include<vector>
#define INT long long
#define var auto
using namespace std;

INT LeebunTanSeck(INT l, INT r) {

	return (l + r) / 2;

}

int main() {

	INT t, m;
	cin >> t >> m;
	vector<INT> vec;

	for (INT i = 0; i < t; i++) {

		INT num;
		cin >> num;

		vec.push_back(num);

	}


	sort(vec.begin(), vec.end());
	INT l = 0, r = vec.back();
	INT res = 0, mid = 0, max = -1;

	while (l <= r)
	{

		mid = LeebunTanSeck(l, r);

		res = 0;

		for (auto i : vec) {

			if (i > mid) {

				res += i - mid;

			}

		}

		if (res >= m) {

			l = mid + 1;
			if (mid > max) max = mid;


		}
		else {

			r = mid - 1;

		}

	}

	cout << max;

}