#include <iostream>

using namespace std;

int main() {

	int min, max;

	cin >> min >> max;

	while (true)
	{

		string s;

		cout << (min + max) / 2 << " ? \n";
		cin >> s;
		

		if (s == "UP") {

			min = (min + max) / 2;

		}
		else if (s == "DOWN") {

			max = (min + max) / 2;

		}
		else
		{
			 
			break;

		}

	}

	cout << "WOW";

}