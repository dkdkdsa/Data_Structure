#include<iostream>

using namespace std;
int arr[101][100001] = {};
int w[101] = {}, v[101] = {};

int main() {


	int k, n;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {

		cin >> w[i + 1] >> v[i + 1];

	}

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= k; j++) {

			if (j - w[i] >= 0)
				arr[i][j] = max(arr[i - 1][j], arr[i - 1][j - w[i]] + v[i]);
			else
				arr[i][j] = arr[i - 1][j];


		}

	}

	cout << arr[n][k];

}