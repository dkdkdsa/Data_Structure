#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	vector<int> arr = { 1, 2, 3 };

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {

		int x, y;
		cin >> x >> y;

		auto a = find(arr.begin(), arr.end(), x);
		auto b = find(arr.begin(), arr.end(), y);
		swap(arr[a - arr.begin()], arr[b - arr.begin()]);

	}

	cout << arr[0];

}