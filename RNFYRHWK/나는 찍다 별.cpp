#include<iostream>

using namespace std;

int main() {

	int res;
	cin >> res;

	for (int i = res; i >= 0; i--) {

		for (int k = 0; k < i; k++) {

			cout << "*";

		}

		cout << endl;

	}

}