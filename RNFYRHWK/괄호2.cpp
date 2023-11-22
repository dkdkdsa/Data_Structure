#include<iostream>
#include<stack>

using namespace std;

int main() {

	string s;
	stack<char> cst;
	bool end = false;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {

		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			cst.push(s[i]);
		
		if (s[i] == ')' || s[i] == '}' || s[i] == ']')
			if (cst.empty()) { end = true; break; }

			switch (s[i])
			{
			case'}': {
				if (cst.top() != '{') 
					end = true;
				else
					cst.pop();
			}break;
			case')': {
				if (cst.top() != '(')
					end = true;
				else
					cst.pop();
			}break;
			case']': {
				if (cst.top() != '[')
					end = true;
				else
					cst.pop();
			}break;
			default:
				break;
			}

	}

	if (end || !cst.empty()) {
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}

}