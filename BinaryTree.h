#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Node.h"

class BinaryTree{
public:
	BinaryTree();
	~BinaryTree();

	void Insert(int data);
	int Delete(int data);

private:
	Node* root;
};
git 
#endif