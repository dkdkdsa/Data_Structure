#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {

    vector<int> answer;
    
    if (direction == "right") {

        
        answer.push_back(numbers.back());
        numbers.pop_back();
        int size = numbers.size();

        for (int i = 0; i < size; i++) {

            answer.push_back(numbers[i]);

        }

    }
    else {


        int size = numbers.size();

        for (int i = 1; i < size; i++) {

            answer.push_back(numbers[i]);

        }

        answer.push_back(numbers.front());

    }

    return answer;

}