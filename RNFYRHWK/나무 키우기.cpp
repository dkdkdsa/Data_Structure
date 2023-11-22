#include<iostream>
#include<vector>

using namespace std;

struct Node
{

	int name;
	vector<Node> nd;

};

class Tree
{

public:

	Node* root;

	void Insert(int data, int target) {

		Node* node = new Node{ data, vector<Node>()};

		if (root == nullptr) {

			root = node;
			return;

		}

		Insert(node, root);

	}

	void Insert(Node* node, Node* parent) {


		

	}

};

int main() {

	int cnt;

	cin >> cnt;
	Tree tree = Tree();

	for (int i = 0; i < cnt; i++) {

		int ct;
		cin >> ct;

		tree.Insert(i, ct);

	}

}