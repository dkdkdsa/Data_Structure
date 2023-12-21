#include<iostream>
#include<vector>

using namespace std;

int arr[100001];

int main() {

	int n, k;

	cin.tie(NULL);

	cin >> n >> k;

	vector<int> ress;

	for (int i = 0; i < n; i++) {

		int res;
		cin >> res;

		arr[res] = 1;

		ress.push_back(res);

	}


	for (int i = 0; i <= k; i++) {

		int curM = INT32_MAX;

		for (int j : ress) {

			if (i < j) continue;

			if (arr[i - j] != 0) {

				if (arr[i] == 0) {

					arr[i] = arr[i - j] + 1;

				}
				else {

					arr[i] = min(arr[i], arr[i - j] + 1);

				}

			}

		}

		if (curM != INT32_MAX) {

			arr[i] = curM;

		}

	}

	if (arr[k] == 0) {

		cout << -1;

	}
	else {

		cout << arr[k];

	}

}