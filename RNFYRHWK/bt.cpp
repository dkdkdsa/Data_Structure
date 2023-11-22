#include "bt.h"

BTreeNode* MakeBTreeNode(void)
{

	auto* bt = new BTreeNode{ 0, nullptr, nullptr };

	return bt;

}

void DeleteBTreeNode(BTreeNode* bt) {
	delete bt;
}

int GetData(BTreeNode* bt) {
	return bt->data;
}

void SetData(BTreeNode* bt, int data) {
	bt->data = data;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {
	
	if (main->left != nullptr) {

		delete main->left;

	}

	main->left = sub;

}
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {


	if (main->right != nullptr) {

		delete main->right;

	}

	main->right = sub;

}
void PreorderTraverse(BTreeNode* bt)
{

	cout << bt->data;
	
	if (bt->left != nullptr) {

		PreorderTraverse(bt->left);

	}

	if (bt->right != nullptr) {

		PreorderTraverse(bt->right);

	}

}
void InorderTraverse(BTreeNode* bt)
{

	if (bt->left != nullptr) {

		InorderTraverse(bt->left);

	}

	cout << bt->data;

	if (bt->right != nullptr) {

		InorderTraverse(bt->right);

	}

}
void PostorderTraverse(BTreeNode* bt)
{
	
	if (bt->left != nullptr) {

		PostorderTraverse(bt->left);

	}

	if (bt->right != nullptr) {

		PostorderTraverse(bt->right);

	}

	cout << bt->data;

}

#include <windows.h>

void BST::SetCursorPosition(int x, int y)
{
    HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    SetConsoleCursorPosition(output, pos);
}

void BST::Print(BTreeNode* node, int x, int y)
{
    if (node == nullptr)
        return;

    SetCursorPosition(x, y);

    cout << node->data;
    Print(node->left, x - (5 / (y + 1)), y + 1);
    Print(node->right, x + (5 / (y + 1)), y + 1);
}

void BST::Insert(BTreeNode* node) {//��� n�� ���� Ž�� Ʈ���� ������. ���� Ʈ���̸� n�� ��Ʈ�� �ϰ�, �׷��� ������ insertRecur�� ȣ���ؼ� ��带 ����
    if (root == NULL) root = node;
    else InsertRecur(root, node);
}

void BST::InsertRecur(BTreeNode* root, BTreeNode* node)
{
    if (GetData(node) == GetData(root))
        return;
    else if (GetData(node) < GetData(root)) {
        if (root->left == NULL)
            MakeLeftSubTree(root, node);
        else
            InsertRecur(root->left, node);
    }
    else {
        if (root->right == NULL)
            MakeRightSubTree(root, node);
        else
            InsertRecur(root->right, node);
    }
}

void BST::Delete(int key) {
    if (root == NULL) return;
    BTreeNode* parent = NULL; // ���� ����� �θ�
    BTreeNode* node = root; // ���ٳ��
    while (node != NULL && GetData(node) != key) {
        parent = node;
        node = (key < GetData(node)) ? node->left : node->right;
    }
    if (node == NULL) {//���� ��尡 Ʈ���� ����
        cout << "key is not in the tree" << endl;
        return;
    }
    else Delete(parent, node);
}

void BST::Delete(BTreeNode* parent, BTreeNode* node) {
    //1. �����Ϸ��� ��尡 �ܸ� ����� ���
    if (node->left == NULL && node->right == NULL) {
        if (parent == NULL) // �����Ϸ��� ��尡 �ٳ���� ��
            root = NULL;
        else {
            if (parent->left == node) {
                parent->left = nullptr;

            }
            else {

                parent->right = nullptr;
            }

        }
    }
    //2. �����Ϸ��� ��尡 �ڽ� 1���� ���
    else if (node->left == NULL || node->right == NULL) {
        //child�� ������ ����� ������ �ڽ�
        BTreeNode* child = (node->left != NULL) ? node->left : node->right;
        //������ ��尡 ��Ʈ�̸� child�� ���ο� ��Ʈ�� ��
        if (node == root) root = child;
        //�ƴϸ� �θ����� �ڽ����� child�� ����
        else {
            if (parent->left == node)
                parent->left = child;
            else
                parent->right = child;
        }
    }
    //3. �����Ϸ��� ��尡 �ڽ� 2���� ���
    else {
        //�����Ϸ��� ����� ������ ����Ʈ������ ���� ���� ���(�İ� ���,succession)�� Ž��
        // s:�İ��� sp:�İ����� �θ���
        BTreeNode* sp = node;
        BTreeNode* s = node->right;
        while (sp->left != nullptr) {
            sp = s;
            s = s->left;
        }
        if (sp->left == s)    // �İ� ����� �θ�� �İ� ����� ������ �ڽ��� ���� ����
            MakeLeftSubTree(sp, s->right);
        else // �İ� ��尡 ������ ����� �ٷ� ������ �ڽ��� ���
            MakeRightSubTree(sp, s->right);
        //�İ� ��� ������ ������ ��忡 ����
        SetData(node, GetData(s));
        delete s;
    }
}