#include <iostream>
#include<string>

using namespace std;

int main() {

	int ncnt;
	cin >> ncnt;

	for (int i = 0; i < ncnt; i++) {

		int f, l, zcnt = 0;
		cin >> f >> l;

		for (int k = f; k <= l; k++) {

			auto z = to_string(k);

			for (auto ll : z) {

				if (ll == '0') zcnt++;

			}

		}

		cout << zcnt << endl;

	}

}