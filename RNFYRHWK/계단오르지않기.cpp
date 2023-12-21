#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[301];
int vecc[301];

int main() {

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {

		int res;
		cin >> res;
		vecc[i] = res;

	}

	arr[0] = vecc[0];
	arr[1] = max(vecc[0] + vecc[1], vecc[1]);
	arr[2] = max(vecc[0] + vecc[2], vecc[1] + vecc[2]);

	for (int i = 3; i < N; i++) {

		arr[i] = max(arr[i - 2] + vecc[i], vecc[i - 1] + vecc[i] + arr[i - 3]);

	}

	cout << arr[N - 1];

}