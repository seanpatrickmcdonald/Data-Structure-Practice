#include "Node.h"

Node::Node(int data_in, src_nodes_in = new Node**, dst_nodes_in = nullptr){
	data = data_in;
	src_nodes = src_nodes_in;
	dst_nodes = dst_nodes_in;
}

Node::~Node(){
	if (num_dst > 0){
		for (int i = 0; i < num_dst; i++){
			delete dst_nodes[i];
		}
	}
}