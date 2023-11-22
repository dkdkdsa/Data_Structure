#include<iostream>

using namespace std;

typedef struct NODE {

	int value;
	NODE* next;

};

class OQ
{
public:
	int maxSize;
	NODE front;
	NODE rear;

	OQ(int maxSize) {

		this->maxSize = maxSize;

		NODE* od;

		for (int i = 0; i < maxSize; i++) {

			NODE* temp = new NODE;

			if (i == 0) {

				front = *temp;
				od = temp;

			}
			else {

				temp->next = od;

			}

			if (i - 1 == maxSize) {

				front.next = temp;

			}

		}
		rear = front;

	}
	~OQ() {};

	void push(int n) {



	}

private:

};

