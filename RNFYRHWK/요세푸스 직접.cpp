#include<iostream>
#include<queue>

using namespace std;

typedef struct NODE {

	int value;
	NODE* node;

};

class Q
{
public:
	Q(int n) {

		fr = new NODE();
		fr->value = 1;
		bk = fr;

	}
	~Q() {};

	NODE *fr, *bk;

	void PUSH(int i) {

		auto t = new NODE();
		t->value = i;
		bk->node = t;
		bk = t;

	}

	int POP() {

		int n = fr->value;

		auto t = fr;
		fr = t->node;

		delete t;

		return n;

	}

	bool ISE() {

		return fr == bk;

	}

private:

};


int main() {

	Q l(1);
	queue<int> save;

	int n, s;
	cin >> n >> s;

	for (int i = 1; i < n; i++) {

		l.PUSH(i + 1);

	}

	int ct = 0;
	while (!l.ISE())
	{


		int n = l.POP();

		if (ct + 1 == s) {

			ct = 0;
			save.push(n);

		}
		else {

			l.PUSH(n);
			ct++;

		}



	}

	int sz = save.size();
	cout << '<';

	for (int i = 0; i < sz; i++) {

		cout << save.front();

		if (i + 1 == sz) {

			cout << '>';
			break;

		}

		save.pop();

		cout << ", ";

	}

}