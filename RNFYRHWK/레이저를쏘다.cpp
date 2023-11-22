#include<iostream>
#include<deque>

using namespace std;

int main() {

	string s;
	cin >> s;
	deque<char> cq;

	int res = 0;

	for (int i = 0; i < s.length(); i++) {

		cq.push_back(s[i]);

	}

	int siz = cq.size();

	int recnt = 0, cutCt = 0, cct = 0;

	while (!cq.empty())
	{

		char cnt = cq.front();
		cq.pop_front();

		if (cnt == '(' && cq.front() == ')') {

			res += recnt;
			cq.pop_front();
			

		}
		else {

			if (cnt == '(') {

				recnt++;
				cct++;
			}
			else {

				recnt--;

			}

		}

	}

	cout << res + cct;

}