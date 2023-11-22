#include<iostream>
#include<cmath>
#define CHACK(x, y) (int)floor((((float)x + y) / 2) + 0.5f);

using namespace std;

int main() {

	int x, y, ct = 0;
	int res, rest;

	cin >> x >> y;
	
	rest = res = CHACK(x, y);

	cout << rest;

	while (rest == res)
	{

		if (res == y) break;

		x++;
		ct++;
		rest = CHACK(x, y);

	}

	//cout << ct;

}