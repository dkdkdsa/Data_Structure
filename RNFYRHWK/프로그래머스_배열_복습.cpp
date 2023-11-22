#include<iostream>
#include<vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {

    vector<int> answer;

    if (direction == "right") {

        auto vel = numbers.back();
        numbers.pop_back();

        answer.push_back(vel);

        for (auto i : numbers) {

            answer.push_back(i);

        }

    }
    else {


        auto vel = numbers.front();


        for (int i = 1; i < numbers.size(); i++) {

            answer.push_back(numbers[i]);

        }

        answer.push_back(vel);

    }

    return answer;

}