#include<iostream>
#include<queue>

using namespace std;

int main() {

	queue<int> qint;
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {

		qint.push(i + 1);

	}

	while (qint.size() != 1)
	{
		qint.pop();

		int n = qint.front();
		qint.pop();

		qint.push(n);

	} 



	cout << qint.back();

}