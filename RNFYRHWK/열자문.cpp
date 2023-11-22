#include <iostream>

using namespace std;

int main()
{

    int num;

    cin >> num;

    for (int i = 0; i < num; i++) {

        string str;
        cin >> str;

        cout << str[0] << str[str.length() - 1] << endl;

    }

}