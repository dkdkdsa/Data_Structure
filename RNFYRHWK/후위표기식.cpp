#include<iostream>
#include<stack>

using namespace std;

class AA {

public:
	AA(int n, char ch) {

		num = n;
		this->ch = ch;

	}

	int num;
	char ch;

};

int SetAA(char ch) {

	if (ch == '(') return 0;
	if (ch == '+' || ch == '-') return 1;
	if (ch == '*' || ch == '/') return 2;
	if (ch == ')') return 3;

	return INT32_MAX;

}

int main() {

	stack<AA> ast = {};

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {

		if (SetAA(s[i]) != INT32_MAX) {


			if (!ast.empty() && SetAA(s[i]) != 3) {


				while(SetAA(s[i]) <= ast.top().num) {

					if (s[i] != '(') {

						cout << ast.top().ch;
						ast.pop();

					}
					else
					{

						break;

					}

					if (ast.empty()) break;
					
				}

			}
			else if(SetAA(s[i]) == 3)
			{


				while (ast.top().ch != '(')
				{

					cout << ast.top().ch;
					ast.pop();

				}

				ast.pop();

			}


			if(SetAA(s[i]) != 3) ast.push(AA(SetAA(s[i]), s[i]));

		}
		else
		{

			cout << s[i];

		}

	}

	auto ast2 = ast;

	if (!ast2.empty()) {

		for (int i = 0; i < ast.size(); i++) {

			cout << ast2.top().ch;
			ast2.pop();

		}

	}

}