#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<string> sr;
	deque<int> arr;
	string cmd, ars;
	int num;
	bool isf = true;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		bool ise = false;
		int arrRange, in = 0;
		cin >> cmd >> arrRange >> ars;
		
		for (int j = 0; j < ars.size(); j++) {

			if (arrRange == 0) break;

			if (ars[j] >= '0' && ars[j] <= '9') {

				in *= 10;
				in += ars[j] - '0';

			}
			else if(ars[j] == ',') {

				arr.push_back(in);
				in = 0;

			}
			else if (ars[j] == ']') {

				arr.push_back(in);
				in = 0;

			}

		}
	

		for (int j = 0; j < cmd.length(); j++) {

			if (cmd[j] == 'R') {

				isf = !isf;

			}
			else if(cmd[j] == 'D') {

				if (!arr.empty()) {

					if (isf) {

						arr.pop_front();

					}
					else
					{

						arr.pop_back();

					}

				}
				else
				{
					ise = true;
					break;
				}

			}

		}

		if (!arr.empty()) {

			int size = arr.size();
			string n;
			n += '[';

			for (int k = 0; k < size; k++) {

				int num = 0;
				if (isf) {

					num = arr.front();
					arr.pop_front();

				}
				else {

					num = arr.back();
					arr.pop_back();

				}

				
				n += to_string(num);

				if (k + 1 == size) break;

				n += ',';

			}

			n += "]\n";

			sr.push_back(n);

		}
		else {

			if (!ise) {

				sr.push_back("[]\n");

			}
			else {

				sr.push_back("error\n");

			}

		}

		arr.clear();
		isf = true;

	}

	int sdfssdf = sr.size();
	for (int i = 0; i < sdfssdf; i++) {

		cout << sr.front();
		sr.pop_front();

	}

}