objects = LinkedList.o BinaryTree.o Node.o

program : $(objects)
	gcc Main.cpp $(objects)

LinkedList.o : 
	gcc -c LinkedList.cpp

BinaryTree.o : 
	gcc -c BinaryTree.cpp

Node.o : 
	gcc -c Node.cpp

clean : 
	rm -f LinkedList.o BinaryTree.o Node.o