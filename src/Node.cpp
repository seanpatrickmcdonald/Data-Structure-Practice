#include "Node.h"

Node::Node(int data_in, Node** src_nodes_in, Node** dst_nodes_in){
	data = data_in;
	src_nodes = src_nodes_in;
	dst_nodes = dst_nodes_in;
}

Node::~Node(){
}

int Node::GetData(){
	return data;
}

int Node::SetParent(Node* parent_in){

	if (parent_in == this){
		return -1;
	}

	int had_parent = 0;
	if (src_nodes){
		had_parent = 1;  //In case we want to know if a parent was replaced 
	}

	else{
		src_nodes = new Node*[1];
	}

	src_nodes[0] = parent_in;
	return had_parent;
}

Node* Node::GetLeftChild(){

}