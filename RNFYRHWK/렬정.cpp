#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000000];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int c;
	cin >> c;

	int n;
	for (int i = 0; i < c; i++) {

		cin >> n;
		arr[i] = n;

	}

	sort(arr, arr + c);

	for (int i = 0; i < c; i++) {

		cout << arr[i] << '\n';

	}


}