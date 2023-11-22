#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> ivec;

	int n;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {

		char s[6];
		cin >> s;

		if (s[1] == 'u') {

			int num;
			cin >> num;

			ivec.push_back(num);

		}
		else if (s[1] == 'o') {

			if (ivec.empty()) {

				cout << -1 << '\n';

			}
			else {

				cout << ivec.front() << '\n';
				ivec.erase(ivec.begin());

			}
		}
		else if (s[1] == 'i') {

			cout << ivec.size() << '\n';

		}
		else if(s[1] == 'r') {

			if (ivec.empty()) {

				cout << -1 << '\n';

			}
			else {

				cout << ivec.front() << '\n';

			}

		}
		else if (s[1] == 'a') {

			if (ivec.empty()) {

				cout << -1 << '\n';

			}
			else {

				cout << ivec.back() << '\n';

			}

		}
		else if (s[1] == 'm') {

			int i = ivec.empty() ? 1 : 0;

			cout << i << '\n';

		}

	}

}