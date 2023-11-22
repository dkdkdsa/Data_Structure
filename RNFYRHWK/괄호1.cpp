#include<iostream>
#include<stack>

using namespace std;

int main() {

	string s;
	cin >> s;

	int count = 0;
	stack<int> ist;

	for (int i = 0; i < s.length(); i++) {

		if (s[i] == '(') {

			count++;
			ist.push(count);
			cout << ist.top();

		}
		else
		{

			cout << ist.top();
			ist.pop();

		}

	}

}