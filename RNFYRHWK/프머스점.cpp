#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

double GetSlope(vector<vector<int>>vec, int i, int j) {

    return (double)(vec[i][1] - vec[j][1]) / (double)(vec[i][0] - vec[j][0]);

}

int solution(vector<vector<int>> dots)
{

    double slope;
    int answer = 0;
    for (int i = 1; i < dots.size(); i++)
    {
        
        if (GetSlope(dots, 0, i) == GetSlope(dots, (i % 3) + 1, ((i + 1) % 3) + 1)) return 1;

    }

    return answer;

}