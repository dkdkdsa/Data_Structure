#include<iostream>
#include<list>
#include<queue>

using namespace std;

int main() {

	list<int> l;
	queue<int> save;

	int n, s;
	cin >> n >> s;

	for (int i = 0; i < n; i++) {

		l.push_back(i + 1);

	}

	int ct = 0;
	while (!l.empty())
	{

		
		int n = l.front();
		l.pop_front();

		if (ct + 1 == s) {

			ct = 0;
			save.push(n);

		}
		else {

			l.push_back(n);
			ct++;

		}

		

	}

	int sz = save.size();
	cout << '<';

	for (int i = 0; i < sz; i++) {

		cout << save.front();

		if (i + 1 == sz) {

			cout << '>';
			break;

		}

		save.pop();

		cout << ", ";

	}

}