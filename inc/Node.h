#ifndef NODE_H
#define NODE_H

class Node{
public:
	Node();
	Node(int data, 
		Node** src_node_in = nullptr, 
		Node** dst_node_in = nullptr);
	~Node();
	int GetData();

	int SetParent(Node*);
	int SetLeftChild(Node*);
	int SetRightChild(Node*);
	Node* GetParent();
	Node* GetLeftChild();
	Node* GetRightChild();


private:
	int data;

	Node** src_nodes;
	Node** dst_nodes;
};

#endif