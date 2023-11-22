#include <iostream>

using namespace std;

void Bubble();
void Insert();

int sortArr[] = { 9, 8, 2, 3, 1, 7, 6, 4, 5, 0 };

int main() {


	Insert();

}

#pragma region 버블버블

void Bubble()
{

	int arrCt = sizeof(sortArr) / sizeof(int);

	for (int i = 0; i < arrCt; i++) {


		for (int j = 0; j < arrCt - i - 1; j++) {

			if (sortArr[j] > sortArr[j + 1]) {

				swap(sortArr[j], sortArr[j + 1]);

			}

		}

	}


	for (int i = 0; i < arrCt; i++) {

		cout << sortArr[i] << " ";

	}

}

#pragma endregion

#pragma region 선택선택

void Insert() {

	int arrCt = sizeof(sortArr) / sizeof(int);

	for (int i = 0; i < arrCt; i++) {

		int *res = &sortArr[i];

		for (int j = i; j < arrCt; j++) {


			if (*res > sortArr[j]) {

				res = &sortArr[j];

			}

		}

		swap(*res, sortArr[i]);

	}

	for (int i = 0; i < arrCt; i++) {

		cout << sortArr[i] << " ";

	}

}

#pragma endregion
