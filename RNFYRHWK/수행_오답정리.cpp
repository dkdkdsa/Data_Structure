#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> v1{ 1, 3, 4, 5, 6 };

	v1.push_back(7);
	v1.pop_back();
	cout << v1.front();
	cout << v1.back();
	cout << v1.size();
	v1.insert(v1.begin() + 1, 2);
	v1.erase(v1.begin() + 1, v1.begin() + 2);

	//이것만 알았어도

}