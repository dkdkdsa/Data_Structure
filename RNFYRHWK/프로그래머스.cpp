#include <string>
#include <vector>

using namespace std;

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;

    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;

}

vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    for (int i = 0; i < numbers.size(); i++) {

        for (int j = 0; j < numbers.size(); j++) {

            if (i == j) continue;

            int n = numbers[i] + numbers[j];
            bool resuelt = false;

            for (int k = 0; k < answer.size(); k++) {

                if (answer[k] == n) resuelt = true;

            }

            if (!resuelt) answer.push_back(n);

        }

    }

    qsort(&answer[0], answer.size(), sizeof(int), compare_ints);

    return answer;
}

