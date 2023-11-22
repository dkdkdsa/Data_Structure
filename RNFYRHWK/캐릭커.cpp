#include<iostream>

using namespace std;

class Crt
{
public:
	Crt(int x, int y, int z) 
	{
		
		this->x = x;
		this->y = y;
		this->z = z;
	
	};

	void SetX(int x) {

		this->x = x;

	}

	void Print() {

		cout << "X : " << x << " Y : " << y << " Z :  " << z << " HP : " << Hp << endl;

	}

	int x, y, z, Hp = 100;

private:

};

int main() {

	Crt c(0, 0, 10);

	for (int i = 0; i < 100; i += 10) {

		c.SetX(i);
		c.Print();

	}

}