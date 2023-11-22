#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main() {

	int cnt, origin;

	cin >> cnt;

	origin = cnt;

	vector<string> svec;
	set<string> sset;

	for (int i = 0; i < cnt; i++) {

		string st;
		cin >> st;

		svec.push_back(st);

	}

	cin >> cnt;

	for (int i = 0; i < cnt; i++) {

		string st;
		cin >> st;

		if (sset.find(st) == sset.end()) {

			sset.insert(st);

		}

	}

	vector<string> nvc;

	for (int i = 0; i < origin; i++) {

		string st = svec.back();
		svec.pop_back();

		if (sset.find(st) == sset.end()) {

			nvc.push_back(st);

		}

			
	}

	cout << nvc.size() << endl;

	for (auto i : nvc) {

		cout << i << endl;

	}

}