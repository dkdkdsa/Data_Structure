#include<iostream>
#include<stack>
#define INPUT(N) cin >> N
#define PRINTLN(N) cout << N << endl
#define PRINT(N) cout << N
using namespace std;

void LEEZINSU(int num, stack<int> &stk) {

	if (num / 2 < 2) {

		stk.push(num % 2);
		stk.push(num / 2);

	}
	else {

		stk.push(num % 2);
		LEEZINSU(num / 2, stk);

	}

}

int main() {

	/*
	stack<char> sCh;
	string s;
	INPUT(s);

	for (int i = 0; i < s.length(); i++) {

		sCh.push(s[i]);

	}

	for (int i = 0; i < s.length(); i++) {

		PRINT(sCh.top());
		sCh.pop();

	}
	*/

	/*
	stack<int> stk;
	int n = 0;
	INPUT(n);

	LEEZINSU(n, stk);

	int size = stk.size();

	try
	{

		if (n < 0) throw n;

		for (int i = 0; i < size; i++) {

			PRINT(stk.top());
			stk.pop();

		}
	}
	catch(int ns)
	{

		cout << ns << " 이거 음수" << endl;

	}
	*/

	string n;
	INPUT(n);

	stack<char> sCh;

	int cnt = 0;

	for (int i = n.length(); i >= 0 ; i--) {

		sCh.push(n[i]);
		if (cnt == 3 && i != 0) 
		{
			sCh.push(',');
			cnt = 1;
		} 
		else
		{

			cnt++;
			
		}

	}

	int size = sCh.size();

	for (int i = 0; i < size; i++) {


		PRINT(sCh.top());
		sCh.pop();

	}

}