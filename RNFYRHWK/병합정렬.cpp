#include <iostream>
#define size 10

using namespace std;

int a[size] = {10, 8, 9, 7, 5, 6, 3, 4, 1, 2}, sorted[size];

void merge(int left, int right) {
	int mid;
	int p1, p2, p3;

	if (left < right) {
		mid = (left + right) / 2;
		merge(left, mid);
		merge(mid + 1, right);
		p1 = left; // 정렬된 왼쪽 배열에 대한 인덱스
		p2 = mid + 1; // 정렬된 오른쪽 리스트에 대한 인덱스
		p3 = left; // 합병될 리스트에 대한 인덱스

		while (p1 <= mid && p2 <= right) {
			if (a[p1] <= a[p2]) sorted[p3] = a[p1++];
			else sorted[p3] = a[p2++];
			p3++;
		}
		// 남아 있는 왼쪽 배열 일괄 복사
		while (p1 <= mid) sorted[p3++] = a[p1++];

		// 남아 있는 오른쪽 배열 일괄 복사
		while (p2 <= right) sorted[p3++] = a[p2++];
		
		//배열 sorted를 배열 a로 재복사
		for (int i = left; i <= right; i++) {
			a[i] = sorted[i];
		}
	}
}

int main() {

	merge(0, size - 1);


	cout << "병합정렬된 배열 : ";

	for (int i = 0; i < size; i++) {

		cout << sorted[i] << " ";

	}

}