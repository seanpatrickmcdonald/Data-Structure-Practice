#include "BinaryTree.h"

BinaryTree::BinaryTree(){
	root = nullptr;
}

BinaryTree::~BinaryTree(){
	
}

void BinaryTree::Insert(int data){
	if (root == nullptr){
		root = new Node(data, nullptr, nullptr);
	}
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