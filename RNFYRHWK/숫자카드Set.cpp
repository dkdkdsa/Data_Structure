#include<iostream>
#include<unordered_set>
#include <string>

using namespace std;

int main() {

	int num;

	unordered_set<int> s;

	cin >> num;

	for (int i = 0; i < num; i++) {

		int re;
		cin >> re;
		s.insert(re);

	}

	int sum;

	cin >> sum;

	string os = "";

	for (int i = 0; i < sum; i++) {

		int isum;
		cin >> isum;

		int is = s.find(isum) != s.end() ? 1 : 0;

		os += to_string(is) + " ";

	}

	cout << os;

}