#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


long long solution(int n, vector<int> times) {

    long long answer = 0;

    sort(times.begin(), times.end());

    long long l = 1, r = (long long)times.back() * n;


    while(l <= r)
    {

        long long mid = (l + r) / 2;

        long long p = 0;

        for (auto item : times) {

            p += mid / item;

        }

        if (p < n) {

            l = mid + 1;

        }
        else {

            if (mid <= r) {

                answer = mid;

            }

            r = mid - 1;

        }

    }

    return answer;

}

int main() {

    cout << solution(10, { 9, 10 });

}