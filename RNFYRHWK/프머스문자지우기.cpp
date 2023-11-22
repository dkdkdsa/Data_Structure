#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {

    string ans;

    for (auto c : my_string) {

        if (c != letter[0]) {

            ans += c;

        }

    }

    return ans;

}