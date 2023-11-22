#include<iostream>
#include<vector>
#include<queue>


using namespace std;


vector<int> solution(vector<int> progresses, vector<int> speeds) {
	queue<int> Q;
	vector<int> answer;

	for (int i = 0; i < progresses.size(); i++)
	{
		progresses[i] = 100 - progresses[i];
		if (progresses[i] % speeds[i] != 0)
		{
			Q.push(progresses[i] / speeds[i] + 1);
		}
		else
			Q.push(progresses[i] / speeds[i]);
	}

	while (!Q.empty())
	{
		int cnt = 1;
		int cur = Q.front();
		Q.pop();
		while (cur >= Q.front() && !Q.empty())
		{
			Q.pop();
			cnt++;
		}
		answer.push_back(cnt);
	}
	return answer;
}