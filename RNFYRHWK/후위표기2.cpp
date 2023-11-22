#include<iostream>
#include<map>
#include<stack>

using namespace std;

int Get(char ch) {

	switch (ch)
	{

	case'+': return 101;
	case '-': return 102;
	case '*': return 103;
	case'/':return 104;

	default:
		break;
	}

	return INT32_MAX;

}

int main() {

	int n;
	int last = 0;
	string s;
	map<char, int> sdf;

	stack<double> ist;

	cin >> n;
	cin >> s;

	for (int i = 0; i < n; i++) {

		int num;
		cin >> num;

		sdf.insert(pair<char, int>((char)65 + i, num));

	}
		

	for (int i = 0; i < s.size(); i++) {

		if (Get(s[i]) != INT32_MAX) {


			double a = ist.top();
			ist.pop();
			double b = ist.top();
			ist.pop();

			switch (Get(s[i]))
			{

			case 101:
				ist.push(b + a);
				break;
			case 102:
				ist.push(b - a);
				break;
			case 103:
				ist.push(b * a);
				break;
			case 104:
				ist.push(b / a);
				break;

			default:
				break;
			}

		}
		else
		{

			ist.push(sdf[s[i]]);

		}

	}
	cout << fixed;
	cout.precision(2);
	cout << ist.top();

}