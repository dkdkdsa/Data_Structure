#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main() {

	int N;
	
	cin >> N;

	vector<int> vec1, vec2;

	for (int i = 0; i < N; i++) {

		int res;
		cin >> res;
		vec1.push_back(res);

	}

	for (int i = 0; i < N; i++) {

		int res;
		cin >> res;
		vec2.push_back(res);

	}

	sort(vec1.begin(), vec1.end(), greater<int>());
	sort(vec2.begin(), vec2.end(), less<int>());

	int r = 0;

	for (int i = 0; i < N; i++) {

		r += vec1[i] * vec2[i];

	}

	cout << r;

}