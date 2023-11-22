#include<iostream>

using namespace std;


class Com
{
public:

	double real, image;
	Com(double a, double b) 
	{
		real = a;
		image = b;

	};
	~Com() {};

	void Print() {

		cout << real << "+" << image << "i" << endl;

	}

private:

};

Com Add(const Com& a, const Com& b) {

	return Com(a.real + b.real, a.image + b.image);

}

int main() {

	Com a{ 1, 2 }, b{ 3, 4 };
	Com t = Add(a, b);

	t.Print();

}