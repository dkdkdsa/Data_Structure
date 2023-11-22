#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int m, f;
vector<int> fVec;

int Serch(int v) {

	int idx = (f + m) / 2;

	if (fVec[idx] == v) return 1;

	if (m - 1 == f) return 0;

	if (fVec[idx] < v) f = idx;
	else m = idx;

	return Serch(v);

}

int main() {

	int n, saved;
	cin >> n;
	m = n;
	saved = n;

	for (int i = 0; i < n; i++) {

		int vel;
		cin >> vel;

		fVec.push_back(vel);

	}

	cin >> n;
	sort(fVec.begin(), fVec.end());
	for (int i = 0; i < n; i++) {

		int vel;
		cin >> vel;
		m = saved;
		f = 0;
		cout << Serch(vel) << endl;

	}


}