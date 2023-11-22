#include <iostream>
#include <map>

using namespace std;

int main() {

	int num;
	cin >> num;

	map<string, int> m = {};

	for (int i = 0; i < num; i++) {

		string s;
		cin >> s;

		m[s]++;

	}

	int mct = 0;
	string sn;

	for (auto mit : m) {

		if (mct < mit.second) {

			mct = mit.second;
			sn = mit.first;

		}

	}

	cout << sn;

}