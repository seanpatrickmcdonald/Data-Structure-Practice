#ifndef NODE_H
#define NODE_H

class Node{
public:
	Node(int data);
	~Node();


private:
	int data;

	unsigned int num_src = 0;
	Node** src_nodes;
	unsigned int num_dst = 0;
	Node** dst_nodes;
};

#endif