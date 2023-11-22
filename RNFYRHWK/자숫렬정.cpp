#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000000];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string c;
	cin >> c;

	int n;
	for (int i = 0; i < c.length(); i++) {

		arr[i] = c[i] - '0';

	}

	sort(arr, arr + c.length(), greater<>());

	for (int i = 0; i < c.length(); i++) {

		cout << arr[i];

	}


}