#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string my_string) {

    string answer = "";
    unordered_set<char> uc;

    for (int i = 0; i < my_string.length(); i++) {

        if (uc.find(my_string[i]) == uc.end()) {

            uc.insert(my_string[i]);
            answer += my_string[i];

        }

    }

    return answer;

}