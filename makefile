cxx=g++
cxxflags=-g -Wall -std=c++0x

src = src/
inc = -I inc/
objects = LinkedList.o BinaryTree.o Node.o
objects_src = $(patsubst %.o, $(src)%.o, $(objects))


program : $(objects)
	$(cxx) $(cxxflags) $(src)Main.cpp $(inc) $(objects_src) 

LinkedList.o : 
	$(cxx) $(cxxflags) -c $(src)LinkedList.cpp -o src/LinkedList.o $(inc)

BinaryTree.o : 
	$(cxx) $(cxxflags) -c $(src)BinaryTree.cpp -o src/BinaryTree.o $(inc)

Node.o : 
	$(cxx) $(cxxflags) -c $(src)Node.cpp -o src/Node.o $(inc)

clean : 
	rm -f $(objects_src)