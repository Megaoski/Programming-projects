#include "DoubleLinkedList.h"

int main()
{
	List<int> myList;

	

	myList.pushFront(0);
	myList.pushFront(1);
	myList.pushFront(2);
	myList.pushFront(3);
	myList.pushFront(4);


	myList.swap(1, 3);
	myList.printNodes();

	


	system("pause");
	return 0;
}


