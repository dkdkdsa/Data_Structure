#include<iostream>
#include<stack>

using namespace std;

int main() {

	int a, cnt = 0;
	cin >> a;
	

	for (int i = 0; i < a; i++) {

		stack<char> cst;
		string n;
		cin >> n;

		for (int j = 0; j < n.length(); j++) {

			if (cst.empty()) {

				cst.push(n[j]);

			}
			else
			{

				if (cst.top() == n[j]) {

					cst.pop();

				}
				else
				{

					cst.push(n[j]);

				}

			}

		}

		if (cst.empty()) {

			cnt++;

		}

	}

	cout << cnt;

}

//프로그래머스
bool solution(string s)
{
	bool answer = true;

	stack<char> cst;

	for (int i = 0; i < s.length(); i++) {

		if (cst.empty()) {

			cst.push(s[i]);

		}
		else
		{

			if (cst.top() == '(' && s[i] == ')') {

				cst.pop();

			}
			else
			{

				cst.push(s[i]);

			}

		}

	}

	return cst.empty();
}