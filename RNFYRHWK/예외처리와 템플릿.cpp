#include<iostream>
using namespace std;

#define PRINTLN(N) cout << N << endl
#define PRINT(N) cout << N
#define INPUT(N) cin >> N

#ifdef SWAP
template<class T>
void Swap(T& a, T& b) {

	T temp = b;
	b = a;
	a = temp;

}
#endif // SWAP

template<class T>
class Circle {

public:

	const static float PI;

	T x, y, rad;

	T GetArea() {

		return rad * PI;

	}

	Circle(T t1, T t2, T t3) {

		x = t1;
		y = t2;
		rad = t3;

	}

};

const float Circle<int>::PI = 3;
const float Circle<double>::PI = 3.141592;

int main() {

#ifdef PIZZA

	int pzs = 0;
	int person = -1;
	int spp = 0;

	PRINT("���� ������ : ");
	INPUT(pzs);
	PRINT("��� �� : ");
	INPUT(person);

	try
	{

		if (pzs == 0 || person == 0) throw 1;
		spp = pzs / person;

	}
	catch (int e)
	{

		spp = 0;

	}

	PRINTLN("�ѻ����" << spp);

#endif // PIZZA

#ifdef AGE

	int age;
	PRINT("���̸� �Է�");
	INPUT(age);

	try
	{

		if (age <= 0 || age >= 25) throw age;

		PRINT(age);

	}
	catch (int e)
	{

		if (age <= 0) PRINT("����Է�");
		else if (age >= 25 && age <= 120)
		{

			PRINT("û�ҳ� �ƴ�");

		}
		else
		{

			PRINT("�ٽ� �Է�");

		}

	}
#endif // AGE

#ifdef SWAP

	string i = "1", j = "2";

	Swap(i, j);

	PRINTLN(i << j);

#endif // SWAP

	Circle<int> c1(1, 2, 3);
	Circle<double> c2(1.1, 2.2, 3.3);

	PRINTLN(c1.GetArea());
	PRINTLN(c2.GetArea());

}