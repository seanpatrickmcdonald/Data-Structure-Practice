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

int Node::SetLeftChild(Node* left_child_in){
	if (left_child_in == this){
		return -1;
	}

	int had_left_child = 0;
	if (dst_nodes){
		had_left_child = 1;
	}
	else{		
		dst_nodes = new Node*[2];
	}

	dst_nodes[0] = left_child_in;
	return had_left_child;
}

int Node::SetRightChild(Node* right_child_in){
	if (right_child_in == this){
		return -1;
	}

	int had_right_child = 0;
	if (dst_nodes){
		had_right_child = 1;
	}
	else{		
		dst_nodes = new Node*[2];
	}

	dst_nodes[1] = right_child_in;
	return had_right_child;
}

Node* Node::GetParent(){
	if (src_nodes){
		return src_nodes[0];
	}

	return nullptr;
}

Node* Node::GetLeftChild(){
	if (dst_nodes){
		return dst_nodes[0];
	}

	return nullptr;
}

Node* Node::GetRightChild(){
	if (dst_nodes){
		return dst_nodes[1];
	}

	return nullptr;
}