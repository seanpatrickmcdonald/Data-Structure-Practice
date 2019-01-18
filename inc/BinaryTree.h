#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Node.h"
#include <iostream>

class BinaryTree{
public:
	BinaryTree();
	~BinaryTree();

	void Insert(int data);
	int Search(int data);
	int Delete(int data);

	void PrintPreOrder();

private:
	void BalanceTree();

	void static const PreOrder(Node*);

	Node* root;
};

#endif