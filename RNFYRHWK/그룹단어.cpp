#include<iostream>
#include<unordered_map>

using namespace std;

int main() {

	unordered_map<char, bool> sm = {};
	char sf = ';';
	int sum;

	cin >> sum;
	
	int wct = sum;

	for (int i = 0; i < sum; i++) {

		string s;
		cin >> s;

		for (int j = 0; j < s.length(); j++) {

			if (s[j] != sf) {

				if (sm[s[j]] == false) {

					sm[s[j]] = true;
					sf = s[j];

				}
				else {

					wct--;
					sf = ';';
					break;

				}

			}
			else continue;

		}

		sm = {};
		sf = ';';

	}

	cout << wct;

}