#include<iostream>

using namespace std;

int main() {

	int k;
	cin >> k;

	int res = 0;

	for (int i = 0; i < 9; i++) {

		int n;
		cin >> n;

		res += n;

	}

	cout << k - res;

}