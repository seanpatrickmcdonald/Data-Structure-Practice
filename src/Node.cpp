#include "Node.h"

Node::Node(int data_in, Node* src_nodes_in, Node* dst_nodes_in){
	data = data_in;
	src_node = src_nodes_in;
	dst_node = dst_nodes_in;
}

Node::~Node(){
}

int Node::GetData(){
	return data;
}