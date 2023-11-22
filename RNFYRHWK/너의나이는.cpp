#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define var auto

class Human
{

public:

	Human(int y, int m, int d, string s) {

		year = y;
		month = m;
		day = d;
		name = s;

	}

	int year, month, day;
	string name;

	bool operator <(Human& h) {

		if (this->year > h.year) return true;
		else if (this->year == h.year)
		{

			if (this->month > h.month) return true;
			else if (this->month == h.month)
			{

				return this->day > h.day;

			}

		}

		return false;

	}

};

int main() {

	int ncnt;

	cin >> ncnt;

	vector<Human> hvec;

	for (int i = 0; i < ncnt; i++) {

		string name;
		int y, m, d;

		cin >> name >> d >> m >> y;

		hvec.push_back({ y, m, d, name });

	}

	sort(hvec.begin(), hvec.end());

	cout << hvec.front().name;
	cout << endl;
	cout << hvec.back().name;

}