#include<iostream>

using namespace std;

class Book
{
public:
	Book(int price, string bookName) {

		this->price = price;
		this->bookName = bookName;

	};
	int price;
	string bookName;

	void Print() {

		cout << "���� : " << bookName << "���� : " << price << endl;

	}

private:

};


int main(){

	Book books[] = {

		Book(22222,"��� c++"),
		Book(33333,"��� c")

	};

	for(auto b : books)
	{
		b.Print();

	}

}
