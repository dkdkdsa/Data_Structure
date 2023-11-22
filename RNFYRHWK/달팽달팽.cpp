#include<iostream>
#include<queue>;

using namespace std;

typedef struct NODE {

	int value;
	NODE* next;

};

int main() {

	int n, s, sn;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> s >> sn;

	NODE* L = nullptr, *FR = nullptr, *Z = nullptr;

	for (int i = 0; i < n; i++) {

		int num;
		cin >> num;

		if (L == nullptr) {

			auto t = new NODE();
			L = t;
			FR = t;
			L->value = num;


		}
		else
		{
			auto t = new NODE();
			t->value = num;
			L->next = t;
			L = t;
			if (i + 1 == sn) {

				Z = t;

			}

		}

		if (i + 1 == n) {

			L->next = Z;

		}

	}

	NODE* crt;
	queue<int> sv;

	for (int i = 0; i < s; i++) {

		int ns;
		cin >> ns;
		NODE* crt = FR;

		for (int j = 0; j < ns; j++) {

			NODE* n = crt->next;
			crt = n;

		}

		sv.push(crt->value);

	}

	

	while (!sv.empty())
	{
		cout << sv.front() << '\n';
		sv.pop();

	}

}