#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, sum;

	cin >> num >> sum;
	unordered_map<string, string> m;

	for (int i = 0; i < num; i++) {
		
		string s;
		cin >> s;

		m[to_string(i + 1)] = s;
		m[s] = to_string(i + 1);

	}

	for (int i = 0; i < sum; i++) {

		string s;
		cin >> s;
		
		cout << m[s] << '\n';

	}

}