#include<iostream>
#include<vector>

using namespace std;

int Fibo(int n, int cnt, vector<int>& vec) {

	if (cnt <= 1) {
		cnt++;
		vec.push_back(1);
		return Fibo(n, cnt, vec);

	}
	if (cnt == n - 1) {

		return vec[cnt - 2] + vec[cnt - 1];

	}

	vec.push_back(vec[cnt - 2] + vec[cnt - 1]);
	cnt++;
	return Fibo(n, cnt, vec);

}

int main() {

	int n;
	cout << "for문 방식 : ";
	cin >> n;

	vector<int> vec;
	vec.push_back(1);
	vec.push_back(1);

	for (int i = 2; i < n; i++) {

		vec.push_back(vec[i - 2] + vec[i - 1]);

	}

	cout << vec.back() << endl;

	cout << "재귀 방식 :";
	cin >> n;

	vector<int> fvec;

	cout << Fibo(n,0, fvec);

}