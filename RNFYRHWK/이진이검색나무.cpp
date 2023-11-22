#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Node
{

	Node *l, *r;
	int data;

};

struct Tree
{

public:
	Node* root;

	void Insurt(int n) {

		Node* node = new Node{nullptr, nullptr, n};

		if (root == nullptr) {

			root = node;

		}
		else
		{

			Connect(node, root);

		}

	}

	void Connect(Node* node, Node* parent) {

		if (node->data < parent->data) {

			if (parent->l == nullptr) parent->l = node;
			else Connect(node, parent->l);

		}
		else {

			if (parent->r == nullptr) parent->r = node;
			else Connect(node, parent->r);

		}

	}

	void Serch() {

		SerchInject(root);

	}

	void SerchInject(Node* node) {

		if (node->l != nullptr) SerchInject(node->l);

		if (node->r != nullptr) SerchInject(node->r);

		cout << node->data << endl;

	}

};

int main() {

	int value;
	Tree tree = Tree();
	
	while (cin >> value) {
		
		tree.Insurt(value);

	}

	tree.Serch();

}