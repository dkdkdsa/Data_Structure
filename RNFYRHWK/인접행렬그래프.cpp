#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class AdjMathGraph {

private:

	char arr[100][100] = {};
	char vert[100] = {};
	int ct;

public:

	AdjMathGraph() {

		arr[0][0] = '  ';
		ct = 1;

	}

	void InsertVERT(char c) {

		arr[ct][0] = c;
		arr[0][ct] = c;
		vert[ct - 1] = c;	

		ct++;

	}

	void InsertEdge(int t1, int t2) {

		arr[t1 + 1][t2 + 1] = '1';
		arr[t2 + 1][t1 + 1] = '1';

	}

	char GetVert(int idx) {

		return vert[idx];

	}

	int GetEdge(int x, int y) {

		return arr[x + 1][y + 1] - '0';

	}

	bool IsEmpty() { return ct == 1; }

	bool IsFull() { return ct >= 101; }

	void Display() {

		int x, y;
		x = ct;

		for (int i = 0; i < x; i++) {

			y = ct;

			for (int j = 0; j < y; j++) {

				if (arr[i][j] == NULL) {

					cout << '0' + ' ';

				}
				else {


					cout << arr[i][j] + ' ';

				}


			}

			cout << endl;

		}

	}

};
class AdjMathGraphVEC  {

private:
	vector<vector<int>> arr;
	vector<char> vert;
	int size;
	vector<bool> isVis;
	vector<int> con;
	unordered_set<int> isIn;
	string output;

public:

	AdjMathGraphVEC(int size) {

		this->size = size;

		isVis.resize(size, false);
		arr.resize(size);

		for (int i = 0; i < size; i++) {

			arr[i].resize(size);

		}

	}

	void InsertVERT(char c) {

		vert.push_back(c);

	}

	void InsertEdge(int x, int y) {

		arr[x][y] = 1;
		arr[y][x] = 1;

	}

	void Display() {

		cout << ' ' << ' ';

		for (int i = 0; i < size; i++) cout << vert[i] << ' ';

		cout << endl;

		for (int i = 0; i < size; i++) {

			cout << vert[i] << ' ';

			for (int j = 0; j < size; j++) {

				cout << arr[i][j] << ' ';

			}

			cout << endl;

		}

	}

	void DFS(int node) {

		isVis[node] = true;
		cout << node;

		for (int i = 0; i < size; i++) {

			if (node + i > size - 1) return;

			if (isVis[node + i] == false && arr[node][node + i] != 0) {

				DFS(node + i);

			}

		}

	}

	void BFS(int node) {

		isVis[node] = true;
		cout << (char)('A' + node);
		
		int verCt = 0;

		for (int i = 0; i < size; i++) {

			if (node + i > size - 1) break;

			if (isVis[node + i] == false && arr[node][node + i] != 0) {

				//cout << i - node;
				isIn.insert(i);

			}

		}

		//con.push_back(verCt);

		for (auto i : isIn) {

			if (isVis[i] == false) {

				BFS(i);

			}

		}

	}

};

int main() {

	int n, m, t1, t2;

	cout << "개수 : ";
	cin >> n >> m;

	cout << "정점 : " << endl;
	AdjMathGraphVEC obj = AdjMathGraphVEC(n);

	for (int i = 0; i < n; i++) {


		obj.InsertVERT('A' + i);

	}

	for (int i = 0; i < m; i++) {

		cin >> t1 >> t2;
		obj.InsertEdge(t1, t2);

	}

	cout << "그래프" << endl;
	obj.Display();

	cout << "탐색" << endl;

	obj.BFS(0);

	cout << "최단거리" << endl;

	//obj.PrintLN();

}