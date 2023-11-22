#include<iostream>

#define PRINTLN(N) std::cout << N << endl
#define PRINT(N) std::cout << N
#define INPUT(N) std::cin >> N
//#define MAREMMO
#define YOURNUMBER

using namespace std;

double GetCountNumber(string c) {

	if (c == "A+") return 4.5;
	if (c == "A0") return 4.0;
	if (c == "B+") return 3.5;
	if (c == "B0") return 3.0;
	if (c == "C+") return 2.5;
	if (c == "C0") return 2.0;
	if (c == "D+") return 1.5;
	if (c == "D0") return 1.0;

	return 0.0;


}

int main(){

#ifdef MAREMMO

	int size;
	INPUT(size);

	for (int i = 1; i <= size * 2; i++) {

		for (int j = 1; j <= size * 2; j++) {

			if (i + j == size + 1) 
				PRINT("*");
			else if (i - j == size) 
				PRINT("*");
			else if(j - i == size) 
				PRINT("*");
			else if (i + j == (size * 3) + 1) 
				PRINT("*");
			else {

				PRINT(" ");

			}
		}

		PRINTLN("");

	}

#endif

#ifdef YOURNUMBER

	double result = 0;
	double result2 = 0;

	for (int i = 0; i < 20; i++) {

		string a, c;
		double b;
		INPUT(a >> b >> c);

		if (c != "P") 
		{

			result += b;
			result2 += b * GetCountNumber(c);

		}

	}

	if (result == 0 && result2 == 0)
	{
		
		printf("%.6f", 0);
		return 0;

	}

	printf("%.6f", result2 / result);


#endif


}