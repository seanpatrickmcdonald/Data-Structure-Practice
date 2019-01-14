#include "Node.h"

Node::Node(int data_in, src_nodes_in = nullptr, dst_nodes_in = nullptr){
	data = data_in;
	src_nodes = src_nodes_in;
	dst_nodes = dst_nodes_in;
}

Node::~Node(){

}