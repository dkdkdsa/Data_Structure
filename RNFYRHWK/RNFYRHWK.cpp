#include <iostream>
#include <algorithm>
#include <Windows.h>
#include "RNFYRHWK.h"
using namespace std;

bool Win(char arr[3][3]);


int main()
{
    
#pragma region 큰수

    srand(time(NULL));

    int randomArr[10];

    for (int i = 0; i < 10; i++) {

        randomArr[i] = rand() % 100 + 1;

    }

    int maxSize = 0;

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

            if (randomArr[i] < randomArr[j]) {

                if (randomArr[j] > maxSize) {

                    maxSize = randomArr[j];

                }

            }

        }

    }

    for (int i = 0; i < 10; i++) cout << randomArr[i] << " ";

    cout << endl << maxSize << endl;

#pragma endregion


    cout << "틱텍토";
    Sleep(1000);
    system("cls");

#pragma region 틱택토??

    char arr[3][3] = {{}};

    while (1)
    {

        cout << "X 입력" << endl;
        int a, b;
        cin >> a >> b;

        arr[a][b] = 'X';
        
        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                cout << " [" << arr[i][j] << "] ";

            }

            cout << endl;

        }

        cout << "O 입력" << endl;
        cin >> a >> b;

        arr[a][b] = 'O';

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                cout << " [" << arr[i][j] << "] ";

            }

            cout << endl;

        }


    }

#pragma endregion


}