#ifndef NODE_H
#define NODE_H

class Node{
public:
	Node(int data);
	~Node();


private:
	int data;
	Node* src_nodes;
	Node* dst_nodes;
};

#endif