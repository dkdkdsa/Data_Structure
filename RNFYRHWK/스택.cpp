#include<iostream>
#include<stack>

using namespace std;

template <class T>
class Stack
{

public:
	const static int size = SHRT_MAX;
	Stack() {

		cout << "胶琶 积己" << endl;
		idx = -1;

	};
	Stack(unsigned int range) {


		cout << "胶琶 积己" << endl;
		idx = -1;

	};
	T Push(T value) {

		if (idx >= size) {

			cout << "StackOverflow" << endl;
			return arr[0];

		}

		idx++;

		arr[idx] = value;
		return arr[idx];

	}
	T Pop() {

		if (idx == -1) {

			cout << "underflow" << endl;
			return arr[0];

		}


		return arr[idx--];

	}
	~Stack() {};
private:

	T arr[size] = {};
	int idx;

};

int main() {

	Stack<int> s1;

	cout << s1.Push(1) << endl;
	cout << s1.Pop() << endl;

}