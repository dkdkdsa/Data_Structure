#include<iostream>
#include<map>

using namespace std;

int main() {


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	map<int, int> imap = {};

	cin >> num;

	for (int i = 0; i < num; i++) {

		int j = 0;
		cin >> j;

		imap[j]++;

	}

	int sum;
	cin >> sum;

	for (int i = 0; i < sum; i++) {

		int j = 0;
		cin >> j;

		cout << imap[j];

		if ((i < sum) == false) break;

		cout << " ";
	}

}