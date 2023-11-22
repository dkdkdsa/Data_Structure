#include<iostream>

using namespace std;

class Book
{
public:
	Book() {};
	Book(int price, string bookName) {

		this->price = price;
		this->bookName = bookName;

	};
	int price;
	string bookName;

	void Print() {

		cout << "제목 : " << bookName << "가격 : " << price << endl;

	}

private:

};

int main() {


	int input;

	cin >> input;
	Book* p = new Book[input];

	for (int i = 0; i < input; i++) {

		int pr;
		string s;

		cin >> pr >> s;

		p[i] = Book(pr, s);

	}

	for (int i = 0; i < input; i++) {


		p[i].Print();

	}

	delete[] p;

}