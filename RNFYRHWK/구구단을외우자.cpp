#include<iostream>

using namespace std;

int main() {

	int res;
	cin >> res;

	for (int i = 0; i < 9; i++) {

		cout << res << " * " << i + 1 << " = " << res * (i + 1) << endl;

	}

}