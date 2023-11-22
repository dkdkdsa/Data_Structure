#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {

	unordered_map<string, int> m;

	for (auto i : clothes) {

		m[i[1]]++;

	}

	int res = 1;

	for (auto i : m) {

		res *= i.second + 1;

	}

	return res - 1;

}