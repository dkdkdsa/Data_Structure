#include<iostream>
#include<vector>

using namespace std;

int main() {
	

	vector<int> v;

	while (true)
	{

		cout << "�Է�(���� -1)" << endl;
		int n;
		cin >> n;

		if (n == -1) break;

		v.push_back(n);

	}

	int nt = 0;

	for (int i : v) {

		nt += i;

	}

	cout << "��� : " << nt / v.size();

}