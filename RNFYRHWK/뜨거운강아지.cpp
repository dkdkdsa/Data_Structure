#include <string>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

bool IsChangeAble(string origin, string target) {

	int changeCt = 0;

	for (int i = 0; i < origin.length(); i++) {

		if (origin[i] != target[i]) changeCt++;

	}

	return changeCt == 1;

}

int solution(string begin, string target, vector<string> words) {
	
	unordered_map<string, int> visMap;
	queue<string> iterQ;

	visMap[begin] = 1;
	iterQ.push(begin);
	
	while (!iterQ.empty())
	{

		auto cur = iterQ.front();
		iterQ.pop();

		for (int i = 0; i < words.size(); i++) {

			if (visMap[words[i]] == 0 && IsChangeAble(cur, words[i])) {

				visMap[words[i]] = visMap[cur] + 1;
				iterQ.push(words[i]);

				if (words[i] == target) {

					return visMap[words[i]] - 1;

				}

			}

		}

	}
	
	return 0;

}