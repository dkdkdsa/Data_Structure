#include<iostream>

using namespace std;

int arr[5001];

int main() {

	int n;
	cin >> n;

	arr[3] = 1;
	arr[5] = 1;

	for (int i = 6; i <= n; i++) {

		if (arr[i - 3] != 0 && arr[i - 5] != 0) {

			arr[i] = min(arr[i - 3] + 1, arr[i - 5] + 1);

		}
		else if (arr[i - 3] != 0) {

			arr[i] = arr[i - 3] + 1;

		}
		else if (arr[i - 5] != 0) {

			arr[i] = arr[i - 5] + 1;

		}


	}

	if (arr[n] == 0) {

		cout << -1;
		return 0;

	}

	cout << arr[n];

}