#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int home, jobRoute;

	cin >> home >> jobRoute;

	vector<int> hVec;

	for (int i = 0; i < home; i++) {

		int res;
		cin >> res;

		hVec.push_back(res);

	}

	sort(hVec.begin(), hVec.end());

	long start = 1;
	long end = hVec.back() - hVec.front();
	long result = 0;

	while (start <= end)
	{

		long mid = (start + end) / 2;
		long router = 1;
		int point = hVec.front();

		for (long i = 1; i < home; i++) {

			if (hVec[i] - point >= mid) {

				router++;
				point = hVec[i];

			}

		}

		if (router >= jobRoute) {

			start = mid + 1;
			result = mid;

		}
		else {

			end = mid - 1;

		}

	}

	std::cout << result;

}