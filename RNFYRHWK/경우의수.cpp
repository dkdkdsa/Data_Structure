#include <vector>
using namespace std;

int answer = 0;

void FInd(vector<int> numbers, int target, int sum, int index) {

    if (index == numbers.size()) {

        if (sum == target) {

            answer++;
        }

        return;

    }

    FInd(numbers, target, sum + numbers[index], index + 1);
    FInd(numbers, target, sum - numbers[index], index + 1);


}

int solution(vector<int> numbers, int target) {

    FInd(numbers, target, 0, 0);

    return answer;
}