#include<iostream>
#include<vector>

using namespace std;

vector<int> v = { 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10 };

int LB(int n) {

	int l = 0, r = v.size() - 1, m = (l + r) / 2;

	while (l <= r)
	{

		if (v[m] > n)
			r = m - 1;
		else
			l = m + 1;

		m = (l + r) / 2;

	}

	return m;

}

int UB(int n) {

	int l = 0, r = v.size() - 1, m = (l + r) / 2;

	while (l < r)
	{

		if (v[m] <= n)
			l = m + 1;
		else
			r = m;

		m = (l + r) / 2;

	}

	return m;

}

int main() {

	cout << UB(5);

}