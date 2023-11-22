#include<iostream>
#include<string>

using namespace std;

char DOROT(char i) {


	if (i == ' ') return i;

	if (i + 13 > 90) {

		return i - 13;

	}

	return i + 13;

}

char DOROTS(char i) {


	if (i == ' ') return i;

	if (i + 13 > 'z') {

		return i - 13;

	}

	return i + 13;

}


int main() {

	string str;
	
	getline(cin, str);

	string res;

	for (int i = 0; i < str.length(); i++) {

		if (str[i] >= 'a' && str[i] <= 'z') {

			res += DOROTS(str[i]);

		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{

			res += DOROT(str[i]);

		}
		else res += str[i];


	}

	cout << res;

}