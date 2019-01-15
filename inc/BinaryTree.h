#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Node.h"
#include <iostream>

class BinaryTree{
public:
	BinaryTree();
	~BinaryTree();

	void Insert(int data);
	int Delete(int data);

	void PrintTree();

private:
	void BalanceTree();

	Node* root;
};

#endif