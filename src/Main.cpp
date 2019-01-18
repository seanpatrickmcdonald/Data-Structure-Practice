#include <iostream>
#include "LinkedList.h"
#include "BinaryTree.h"

int main(){
	BinaryTree T;

	T.Insert(2);
	T.Insert(3);
	T.Insert(1);

	std::cout << T.Search(0) << std::endl;
	std::cout << T.Search(1) << std::endl;
	std::cout << T.Search(6) << std::endl;
}