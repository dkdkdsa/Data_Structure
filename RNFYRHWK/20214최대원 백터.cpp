#include<iostream>
#include<vector>

using namespace std;

int main() {
	

	vector<int> v;

	while (true)
	{

		cout << "입력(종료 -1)" << endl;
		int n;
		cin >> n;

		if (n == -1) break;

		v.push_back(n);

	}

	int nt = 0;

	for (int i : v) {

		nt += i;

	}

	cout << "평균 : " << nt / v.size();

}