#include "BinaryTree.h"

BinaryTree::BinaryTree(){
	root = nullptr;
}

BinaryTree::~BinaryTree(){
	
}

void BinaryTree::Insert(int data){
	if (root == nullptr){
		root = new Node(data);
		return;
	}

	Node* cursor = root;
	while(cursor){
		if (data > cursor->GetData()){
			if (cursor->GetRightChild() == nullptr){
				cursor->SetRightChild(new Node(data));
				return;
			}

			else{
				cursor = cursor->GetRightChild();
			}
		}

		else{
			if (cursor->GetLeftChild() == nullptr){
				cursor->SetLeftChild(new Node(data));
				return;
			}

			else{
				cursor = cursor->GetLeftChild();
			}
		}
	}
}

int BinaryTree::Search(int data){
	if (root){
		Node* cursor = root;
		while(cursor){
			int cursor_data = cursor->GetData();
			if (cursor_data == data){
				return 1;
			}

			else{
				if (data > cursor_data){
					cursor = cursor->GetRightChild();
				}

				else{
					cursor = cursor->GetLeftChild();
				}
			}
		}
	}

	return 0;
}

int BinaryTree::Delete(int data){
	return 0;
}

void BinaryTree::BalanceTree(){
	
}

void BinaryTree::PrintPreOrder(){
	PreOrder(root);
	std::cout << std::endl;
}

void const BinaryTree::PreOrder(Node* cursor){
	if (!cursor){
		return;
	}

	PreOrder(cursor->GetLeftChild());
	std::cout << cursor->GetData() << ' ';
	PreOrder(cursor->GetRightChild());
}