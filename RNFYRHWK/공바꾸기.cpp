#include<iostream>
#include<vector>

using namespace std;

int main() {


	int n, m;
	vector<int> iv;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {

		iv.push_back(i + 1);

	}

	for (int i = 0; i < m; i++) {

		int f, s;
		cin >> f >> s;

		swap(iv[f - 1], iv[s - 1]);

	}

	for (auto item : iv) {

		cout << item << " ";

	}

}