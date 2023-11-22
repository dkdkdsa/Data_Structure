#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	set<string> company;

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		string name, state;
		cin >> name >> state;

		if (state[0] == 'e') {

			company.insert(name);

		}
		else {

			company.erase(name);

		}

	}

	vector<string> vec;
	for (auto i : company) {

		vec.push_back(i);

	}

	for (int i = vec.size() - 1; i >= 0; i--) {

		cout << vec[i] << '\n';

	}

}