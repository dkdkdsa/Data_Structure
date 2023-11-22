#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<vector>

using namespace std;

int main() {

	unordered_set<string> db = {};
	vector<string> dbv;
	int num, sum;

	cin >> num >> sum;

	for (int i = 0; i < num + sum; i++) {

		string s;
		cin >> s;

		if (db.find(s) == db.end()) {

			db.insert(s);

		}
		else {

			dbv.push_back(s);

		}

	}

	int dbt = 0;
	set<string> sasdf;
	for (auto mm : dbv) {


		sasdf.insert(mm);
		dbt++;

	}

	int size = sasdf.size();

	cout << dbt << '\n';

	for (auto asdf : sasdf) {

		cout << asdf << '\n';

	}

}