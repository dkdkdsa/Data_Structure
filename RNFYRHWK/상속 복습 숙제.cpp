#include<iostream>
#define PRINTLN(N) cout << N << endl 
using namespace std;

class Huaman
{
public:

	string GetName() { return name; }
	void SetName(string value) { name = value; }
	int GetAge() { return age; }
	void SetAge(int value) { age = value; }
	void Print() {

		PRINTLN(age << name);

	}
	Huaman() {

		PRINTLN("ºÎ¸ð");

	}

private:
	string name = "";
	int age = 0;

};

class Stu : Huaman
{
public:

	Stu() : Huaman() {

		PRINTLN("È£Ãâ");
		
	}

private:
	string major;

};

class Phone {
	void call() {};
	void receive() {};
	void sendSMS() {};
};
class Computer {
	void doInternet() {};
};

class SMP : Phone, Computer
{
public:
	SMP();
	~SMP();

private:

};


int main() {

	Huaman h1, h2;

	h1.SetName("ÃáÇâ");
	h1.SetAge(1292);

	h2.SetName("¸ù·æ");
	h2.SetAge(1234);

	h1.Print();
	h2.Print();

}