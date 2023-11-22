#include<iostream>

using namespace std;

class Queue
{
public:

	void InitQ(int size){

		this->size = size;
		buf = new int[size];
		fr = -1;
		re = -1;

	}

	void In(int n) {

		if (re == size - 1) return;

		re++;

		buf[re] = n;

	}

	int De() {

		if (re == -1 || re == fr) return INT32_MIN;

		fr++;
		return buf[fr];

	}

	int IFUL() {

		return re == size - 1;

	}

	int IEMP() {

		return re == -1 || re == fr;

	}

private:

	int* buf;
	int fr, re;
	int size;

};


int main(){

	Queue q;
	q.InitQ(1);

	q.In(1);
	cout << q.IFUL();
	cout << q.De();
	cout << q.IEMP();

}