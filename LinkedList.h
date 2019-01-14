#include "Node.h"

class LinkedList{

public:
	LinkedList();
	~LinkedList();

	void Insert(int data);
	void Delete(int data);

private:
	Node* head_node;
	Node* tail_node;

};