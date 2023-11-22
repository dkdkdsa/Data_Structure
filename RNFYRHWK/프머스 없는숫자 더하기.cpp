#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

// 정석풀이
//int solution(vector<int> numbers) {
//
//    int answer = 0;
//
//    for (int i = 0; i < numbers.size(); i++) {
//
//        answer += numbers[i];
//
//    }
//
//
//    return 45 - answer;
//}

//Set 풀이
int solution(vector<int> numbers) {

    int answer = 0;
    unordered_set<int> uc;

    for (int i = 0; i < numbers.size(); i++) {

        uc.insert(numbers[i]);

    }

    for (int i = 0; i < 10; i++) {

        if (uc.find(i) == uc.end()) {

            answer += i;

        }

    }


    return answer;
}