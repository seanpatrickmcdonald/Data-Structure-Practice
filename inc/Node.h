#ifndef NODE_H
#define NODE_H

class Node{
public:
	Node(int data, 
		Node* src_node_in = nullptr, 
		Node* dst_node_in = nullptr);
	~Node();
	int GetData();

private:
	int data;

	Node* src_node;
	Node* dst_node;
};

#endif