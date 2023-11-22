#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

bool IsMatch(vector<int>& X, vector<int>& Y) {

	sort(Y.begin(), Y.end());

	for (int i = 0; i < Y.size(); i++) {

		if (X[i] == Y[i]) return true;

	}

	return false;

}

bool ChackJuBock(const vector<int> &X, int idx, int value) {

	for (int i = 0; i < idx; i++) {

		if (X[i] == value) return true;

	}

	return false;

}

int MakeNotVal(const vector<int>& X, int idx, int value) {

	for (int i = 0; i < idx; i++) {



	}

}

int RelativeMatch(vector<int> X, int m) {

	int n = X.size();

	for (int i = 0; i < m; ++i) {

		vector<int> Y = X;

		for (int j = 0; j < n; ++j) {

			Y[j] = (Y[j] + i + m) % m;
			

		}

		if (IsMatch(X, Y)) return i;

	}
	return -1;
}


int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		int M, N, ca = 0;
		cin >> M >> N;

		vector<int> st;

		for (int i = 0; i < N; i++) {

			int v;
			cin >> v;
			st.push_back(v);

		}

		cout << RelativeMatch(st, M) + 1;

	}

}