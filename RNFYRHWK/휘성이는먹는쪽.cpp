#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		int arr1s, arr2s, ans = 0;
		vector<int> arr1, arr2;
		cin >> arr1s >> arr2s;

		for (int j = 0; j < arr1s; j++) {

			int res;
			cin >> res;
			arr1.push_back(res);

		}

		for (int j = 0; j < arr2s; j++) {

			int res;
			cin >> res;
			arr2.push_back(res);

		}

		sort(arr2.begin(), arr2.end());


		for (int j = 0; j < arr1s; j++) {

			ans += lower_bound(arr2.begin(), arr2.end(), arr1[j]) - arr2.begin();

		}

		cout << ans << '\n';

	}


}