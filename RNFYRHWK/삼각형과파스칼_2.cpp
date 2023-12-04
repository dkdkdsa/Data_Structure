#include<iostream>
#include<vector>

using namespace std;

int main() {


	int arr[30][30] = {};

	for (int i = 0; i < 30; i++) {

		for (int j = 0; j < i + 1; j++) {

			if (j == 0) {

				arr[i][j] = 1;

			}
			else {

				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];

			}

		}

	}

	int r, c, w;
	cin >> r >> c >> w;

	int res = 0;

	for (int i = 0; i < w; i++) {

		for (int j = 0; j < i + 1; j++) {

			res += arr[i + (r - 1)][j + (c - 1)];

		}

	}

	cout << res;

}