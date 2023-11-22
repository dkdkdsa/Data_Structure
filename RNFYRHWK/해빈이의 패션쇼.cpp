#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		unordered_map<string, int> m;
		int tn;
		cin >> tn;

		for (int j = 0; j < tn; j++) {

			string str, name;
			cin >> str >> name;

			m[name]++;

		}

		int cur = 1;

		for (auto item : m) {

			cur *= item.second + 1;

		}

		cout << cur - 1 << endl;

	}


}