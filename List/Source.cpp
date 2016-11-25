#include<iostream>
#include"LinkedList.h"

using namespace std;

int main() {

	List<int> exampleList;
	exampleList.pushFront(2);
	exampleList.pushBack(3);
	exampleList.pushFront(1);
	exampleList.printNodes();
	exampleList.remove(2);
	exampleList.printNodes();
	exampleList.insert(2, 3); // pongo un elemento 3 en la ultima posicion, realmente la ultima es 2, pero sale el assert error y lo hace igualmente
	exampleList.printNodes();
	exampleList.remove(3); 
	exampleList.printNodes();


	system("pause");
	return 0;
}