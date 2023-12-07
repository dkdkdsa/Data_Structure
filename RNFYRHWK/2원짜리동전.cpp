#include<iostream>

using namespace std;

int coinArr[101];
int arr[10001];

int main() {

	int n, k;



	cin >> n >> k;

	for (int i = 0; i < n; i++) {

		cin >> coinArr[i];

	}

	arr[0] = 1;

	for (int i = 0; i < n; i++) {

		for (int j = coinArr[i]; j <= k; j++) {

			arr[j] += arr[j - coinArr[i]];

		}

	}

	cout << arr[k];

}