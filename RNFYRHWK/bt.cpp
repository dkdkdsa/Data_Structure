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

void BST::Insert(BTreeNode* node) {//노드 n을 이진 탐색 트리에 삽입함. 공백 트리이면 n을 루트로 하고, 그렇지 않으면 insertRecur을 호출해서 노드를 삽입
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
    BTreeNode* parent = NULL; // 없앨 노드의 부모
    BTreeNode* node = root; // 없앨노드
    while (node != NULL && GetData(node) != key) {
        parent = node;
        node = (key < GetData(node)) ? node->left : node->right;
    }
    if (node == NULL) {//없앨 노드가 트리에 없음
        cout << "key is not in the tree" << endl;
        return;
    }
    else Delete(parent, node);
}

void BST::Delete(BTreeNode* parent, BTreeNode* node) {
    //1. 삭제하려는 노드가 단말 노드일 경우
    if (node->left == NULL && node->right == NULL) {
        if (parent == NULL) // 삭제하려는 노드가 근노드일 때
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
    //2. 삭제하려는 노드가 자식 1개일 경우
    else if (node->left == NULL || node->right == NULL) {
        //child는 삭제할 노드의 유일한 자식
        BTreeNode* child = (node->left != NULL) ? node->left : node->right;
        //삭제할 노드가 루트이면 child가 새로운 루트가 됨
        if (node == root) root = child;
        //아니면 부모노드의 자식으로 child를 연결
        else {
            if (parent->left == node)
                parent->left = child;
            else
                parent->right = child;
        }
    }
    //3. 삭제하려는 노드가 자식 2개일 경우
    else {
        //삭제하려는 노드의 오른쪽 서브트리에서 가장 작은 노드(후계 노드,succession)를 탐색
        // s:후계노드 sp:후계노드의 부모노드
        BTreeNode* sp = node;
        BTreeNode* s = node->right;
        while (sp->left != nullptr) {
            sp = s;
            s = s->left;
        }
        if (sp->left == s)    // 후계 노드의 부모와 후계 노드의 오른쪽 자식을 직접 연결
            MakeLeftSubTree(sp, s->right);
        else // 후계 노드가 삭제할 노드의 바로 오른쪽 자식일 경우
            MakeRightSubTree(sp, s->right);
        //후계 노드 정보를 삭제할 노드에 복사
        SetData(node, GetData(s));
        delete s;
    }
}