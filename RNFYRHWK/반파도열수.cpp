#include<iostream>
#include<vector>

using namespace std;


int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long t;

	vector<long long> vec = {1, 1, 1};

	cin >> t;

	for (long long i = 0; i < t; i++) {

		int n;
		cin >> n;

		for (int i = 3; i < n; i++) {

			vec.push_back(vec[i - 3] + vec[i - 2]);

		}

		cout << vec[n - 1] << '\n';

		vec = { 1, 1, 1 };

	}

}