#include<iostream>
#include<stack>
#include<queue>;

using namespace std;

bool Input(stack<int> & cit, queue<int>& sst, string& s) {

	int num = sst.front();
	cit.push(num);
	sst.pop();
	s += "P";
	if (sst.empty()) {

		while (!cit.empty())
		{

			if (cit.top() > num) break;

			cit.pop();
			s += "O";

		}
		return true;

	}

	return false;

}

int main() {

	stack<int> cit;
	queue<int> sst;
	string s;
	bool isEnd;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {

		int num;
		cin >> num;
		sst.push(num);

	}

	while (!sst.empty())
	{

		if (cit.empty()) {

			if (Input(cit, sst, s)) break;

		}
		else
		{
			
			if (cit.top() < sst.front()) {

				while (cit.top() < sst.front())
				{

					cit.pop();
					s += "O";
					if (cit.empty()) break;

				}

			}
			else
			{

				if (Input(cit, sst, s)) break;

			}

		}

	}

	if (!cit.empty()) cout << "ºÒ°¡´É" << endl;
	else cout << s;

}