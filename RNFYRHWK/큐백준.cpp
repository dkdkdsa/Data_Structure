#include<iostream>
#include<queue>

using namespace std;

int main() {

	int n;

	queue<int> qint;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {

		char c[6];
		cin >> c;

		if (c[1] == 'u') {

			int num;
			cin >> num;
			qint.push(num);

		}
		else if(c[1] == 'o') {

			if (qint.empty()) cout << -1 << '\n';
			else {

				cout << qint.front() << '\n';
				qint.pop();

			}

	

		}
		else if (c[1] == 'i') {

			cout << qint.size() << '\n';

		}
		else if(c[1] == 'm')
		{

			cout << (qint.empty() ? 1 : 0) << '\n';

		}
		else if (c[1] == 'r') {

			if (!qint.empty()) cout << qint.front() << '\n';
			else cout << -1 << '\n';

		}
		else if (c[1] == 'a') {

			if (!qint.empty()) cout << qint.back() << '\n';
			else cout << -1 << '\n';

		}

	}

}