#include<iostream>
#include<vector>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string crtSt; 
    string rmStr; 
    vector<char> chvec = {};

    cin >> crtSt >> rmStr;

    int rmLen = rmStr.length(); 

    for (int i = 0; i < crtSt.length(); i++)
    {
        chvec.push_back(crtSt[i]); 

        if (chvec.size() >= rmLen) { 

            bool isIn = true;

            for (int j = 0; j < rmLen; j++) {

                if (chvec[chvec.size() - rmLen + j] != rmStr[j]) {

                    isIn = false;
                    break;

                }

            }

            if (isIn) 
                chvec.erase(chvec.end() - rmLen, chvec.end());

        }

    }

    if (chvec.empty())
        cout << "FRULA";
    else {

        for (int i = 0; i < chvec.size(); i++) {

            cout << chvec[i];

        }

    }
        

}
