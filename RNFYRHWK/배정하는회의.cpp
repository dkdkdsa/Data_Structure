#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Meeting
{

	int startTime;
	int endTime;

	int GetTotalTime() {

		return endTime - startTime;

	}

};

bool MeetingSort(Meeting l, Meeting r) {

	if (l.endTime == r.endTime) {

		return l.startTime > r.startTime;

	}

	return l.endTime > r.endTime;

}

int main() {

	vector<Meeting> mvec;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {

		int start, end;
		cin >> start >> end;

		mvec.push_back({ start, end });

	}

	sort(mvec.begin(), mvec.end(), MeetingSort);

	int curEnd = mvec.back().endTime;
	int cnt = 1;

	mvec.pop_back();

	while (!mvec.empty())
	{

		Meeting cur = mvec.back();
		mvec.pop_back();

		if (curEnd > cur.startTime) {

			continue;

		}

		cnt++;
		curEnd = cur.endTime;

	}

	cout << cnt;

}