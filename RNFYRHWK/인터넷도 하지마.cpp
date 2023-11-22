#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	long K, M; //K : 가지고있다, M 필요해잉

	cin >> K >> M;

	vector<long> kVec;

	for (long i = 0; i < K; i++) {

		long res;
		cin >> res;

		kVec.push_back(res);

	}

	sort(kVec.begin(), kVec.end());

	long min = 1;
	long max = kVec.back();
	long result = 0;

	while (min <= max)
	{

		long mid = (min + max) / 2;
		long res = 0;

		for (auto item : kVec) {

			res += item / mid;

		}

		if (res >= M) {

			min = mid + 1;
			result = mid;

		}
		else {

			max = mid - 1;

		}

	}

	cout << result;

}