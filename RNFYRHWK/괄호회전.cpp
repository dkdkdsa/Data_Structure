#include <string>
#include <queue>
#include <stack>

using namespace std;
bool Chack(string s);

int solution(string s) {

    int answer = 0;
    queue<char> cq, sq;

    for (int i = 0; i < s.length(); i++) {

        sq.push(s[i]);

    }

    for (int i = 0; i < s.length(); i++) {

        cq = sq;
        string ss = "";
        while (!cq.empty())
        {

            ss += cq.front();
            cq.pop();

        }

        if (Chack(ss)) answer++;

        auto temp = sq.front();
        sq.pop();
        sq.push(temp);

    }

    return answer;

}

bool Chack(string s) {

    stack<char> cq;

    for (int i = 0; i < s.length(); i++) {

        if (cq.empty()) {

            cq.push(s[i]);

        }
        else {

            if (s[i] == ']' && cq.top() == '[') {

                cq.pop();

            }
            else if (s[i] == ')' && cq.top() == '(')
            {

                cq.pop();

            }
            else if (s[i] == '}' && cq.top() == '{')
            {

                cq.pop();

            }
            else {

                cq.push(s[i]);

            }

        }

    }

    return cq.empty();

}