#include<iostream>

using namespace std;

class Pizza
{
public:
	Pizza(int r = 0) {
	
		radius = r;

	};
	~Pizza() {};
	void SetRad(int r) {

		radius = r;

	}

	void Print() {

		cout << "Pizza(" << radius << ")" << endl;

	}

private:

	int radius;

};

void Upgrade(Pizza &p) {

	p.SetRad(20);

}

void Upgrade(Pizza *p) {

	p->SetRad(20);

}

int main() {

	Pizza obj(10);
	Upgrade(&obj);
	obj.Print();

}