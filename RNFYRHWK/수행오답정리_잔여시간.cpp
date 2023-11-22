#include<iostream>
#define INPUT(N) std::cin >> N
#define PRINTLN(N) std::cout << N
#define FLOAT_TO_INT(x) ((x)>=0?(int)((x)+0.5):(int)((x)-0.5))

using namespace std;

//int main() {
//
//	int nArr[9][9] = {};
//
//	for (int x = 0; x < 9; x++) {
//
//		for (int y = 0; y < 9; y++) {
//
//			INPUT(nArr[x][y]);
//
//		}
//
//	}
//
//	for (int x = 0; x < 9; x++) {
//
//		float result = 0; int uSa = 0, che = 100;
//
//		for (int y = 0; y < 9; y++) {
//
//			result += nArr[x][y];
//
//		}
//
//		result /= 9;
//		result = FLOAT_TO_INT(result);
//		
//		for (int y = 0; y < 9; y++) {
//
//			int uChe = result >= nArr[x][y] ? result - nArr[x][y] : nArr[x][y] - result;
//
//			if (che > uChe) {
//
//				che = uChe;
//
//				uSa = nArr[x][y];
//
//			}
//			else if(che == uChe)
//			{
//
//				che = uChe;
//
//				uSa = uSa > nArr[x][y] ? uSa : nArr[x][y];
//
//			}
//
//		}
//
//		cout << FLOAT_TO_INT(result) << " " << uSa << endl;
//
//	}
//
//}

int main() {

	int n = 0;
	INPUT(n);

    int i = 0, p1 = 1, p2 = 2, s, c = 0;

    while (p1 < p2) {
        s = 0;
        for (i = p1; i <= p2; i++) {
            s += i;
        }

        if (s < n) {
            p2++;
        }
        else if (s > n) {
            p1++;
        }
        else {
            cout << p1;
            for (i = p1 + 1; i <= p2; i++) {
                cout << " + " << i;
            }
            cout << " = " << n << endl;
            c++;
            p1++;
            p2++;
        }
    }

    PRINTLN(n);


}
