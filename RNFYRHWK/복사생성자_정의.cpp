#include<iostream>

using namespace std;

class MyArr {

public : 
	int size;
	int* data;

	MyArr(int size) {

		this->size = size;
		data = new int[size];

	}
	~MyArr() {

		if (data != NULL) delete[] data;

	}
	MyArr(const MyArr& other) {

		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < size; i++) {

			this->data[i] = other.data[i];

		}

	}

};

int main() {

	MyArr arr(10);
	arr.data[0] = 1;
	{
	
		MyArr c = arr;
	}
	arr.data[0] = 2;

}