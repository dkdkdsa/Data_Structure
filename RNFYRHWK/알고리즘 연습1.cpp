#include <iostream>

using namespace std;

int arr[] = { 9, 3, 8, 7, 1,2 ,4 ,5 ,6, 0 };

void BB() {

	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {


		for (int j = 0; j < size - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {

				swap(arr[j], arr[j + 1]);

			}

		}

	}

	for (auto item : arr) {

		cout << item << " ";

	}

}

void Select() {

	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {

		int* res = &arr[i];

		for (int j = i + 1; j < size; j++) {

			if (*res > arr[j]) {

				res = &arr[j];

			}

		}

		swap(arr[i], *res);

	}

	for (auto item : arr) {

		cout << item << " ";

	}

}

int main() {

	Select();

}