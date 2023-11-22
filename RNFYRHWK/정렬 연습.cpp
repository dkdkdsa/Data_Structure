#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MB
{
public:
	string str;
	int age;

};

bool CP(MB& a, MB& b) {

	return a.age > b.age;

}

int main() {

	vector<int> vt1{ 6, 3, 1, 2, 5, 8, 9 };

	sort(vt1.begin(), vt1.end());
	sort(vt1.begin(), vt1.end(), greater<int>());
	vector<MB> vt2{ {"ADSF", 1},{"ADSaF", 2}, {"ADsSF", 3}, {"ADSdF", 4} };
	sort(vt2.begin(), vt2.end(), CP);

}