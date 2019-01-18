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
			}

			else{
				cursor = cursor->GetRightChild();
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
				if (cursor_data > data){
					//cursor = root->GetRightChild();
				}

				else{
					//cursor = root->GetLeftChild();
				}
			}
		}
	}

	return -1;
}

int BinaryTree::Delete(int data){
	return 0;
}

void BinaryTree::BalanceTree(){
	
}

void BinaryTree::PrintTree(){
	if (root){
		std::cout << root->GetData() << std::endl;
	}
}