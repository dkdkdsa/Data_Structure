#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

class mb {

public:
	string str;
	int age;

};

bool CP(mb a, mb b) {

	return a.age < b.age;

}


int main() {

	int num;
	cin >> num;

	vector<mb> mv;

	for (int i = 0; i < num; i++) {

		string s;
		int n;

		cin >> n >> s;

		mb m;
		m.str = s;
		m.age = n;

		mv.push_back(m);

	}

	stable_sort(mv.begin(), mv.end(), CP);

	for (int i = 0; i < num; i++) {

		cout << mv[i].age << " " << mv[i].str << "\n";

	}

}