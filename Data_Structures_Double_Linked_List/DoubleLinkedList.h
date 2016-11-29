#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <assert.h>
using namespace std;

template <class Type>
class List{
public:
	List();
	~List();

	void pushFront(const Type& elem);
	void pushBack(const Type& elem);
	void popFront();
	void popBack();
	void insert(unsigned int pos, const Type& elem); // pos of the first element == 0
	void remove(unsigned int pos);					 // pos of the first element == 0
	void swap(unsigned int pos1, unsigned int pos2);
	void isPosCorrect(unsigned int pos) const;//method adicional para hacer el method swap

	Type front() const;
	Type back() const;

	Type getValue(unsigned int pos) const;			 // pos of the first element == 0

	bool empty() const;
	int size() const;
	void clear();

	void print() const;
	void printNodes() const;

private:
	struct node{
		Type value;
		node* previous;
		node* next;
	};

	node* first;
};

template<class Type>
List<Type>::List()
{
	this->first = NULL;
}

template<class Type>
List<Type>::~List()
{
	clear();
}

template<class Type>
void List<Type>::pushFront(const Type& elem)
{
	node* aux = new node;
	aux->value = elem;
	aux->previous = NULL;
	aux->next = first;
	
	if (first != NULL)
		first->previous = aux;
	
	first = aux;
}

template<class Type>
void List<Type>::pushBack(const Type& elem)
{
	node* aux = new node;
	aux->value = elem;
	aux->next = NULL;

	if (first == NULL)
	{
		aux->previous = NULL;
		first = aux;
	}
	else
	{
		node* iterator = first;
		while (iterator->next != NULL)
			iterator = iterator->next;

		aux->previous = iterator;
		iterator->next = aux;
	}
}

template<class Type>
void List<Type>::popFront()
{
	// If first == NULL then abort
	assert(first != NULL);

	if (first->next == NULL)
	{
		// List with 1 element
		delete first;
		first = NULL;
	}
	else
	{
		node* aux = first;
		first = first->next;
		first->previous = NULL;
		delete aux;
	}
}

template<class Type>
void List<Type>::popBack()
{
	// If first == NULL then abort
	assert(first != NULL);

	if (first->next == NULL)
	{
		// List with 1 element
		delete first;
		first = NULL;
	}
	else
	{
		node* iterator = first;
		while ((iterator->next)->next != NULL)
			iterator = iterator->next;

		node* aux = iterator->next;
		delete aux;
		iterator->next = NULL;
	}
}

template<class Type>
void List<Type>::insert(unsigned int pos, const Type& elem)
{
	if (pos == 0)
	{
		pushFront(elem);
	}
	else
	{
		// If first == NULL then abort
		assert(first != NULL);

		unsigned int counter = 0;
		node* iterator = first;
		while (counter < pos - 1 && iterator->next != NULL)
		{
			iterator = iterator->next;
			counter++;
		}

		// If counter != pos - 1 then abort
		assert(counter == pos - 1);

		node* aux = new node;
		aux->value = elem;
		aux->previous = iterator;
		aux->next = iterator->next;

		if (iterator->next != NULL)
			(iterator->next)->previous = aux;

		iterator->next = aux;
	}
}

template<class Type>
void List<Type>::remove(unsigned int pos)
{
	// If first == NULL then abort
	assert(first != NULL);

	if (pos == 0)
	{
		popFront();
	}
	else
	{
		unsigned int counter = 0;
		node* iterator = first;
		while (counter < pos - 1 && iterator->next != NULL)
		{
			iterator = iterator->next;
			counter++;
		}

		// If counter != pos - 1 then abort
		assert(counter == pos - 1 && iterator->next != NULL);

		node* aux = iterator->next;
		iterator->next = aux->next;
		
		if (aux->next != NULL)
			(aux->next)->previous = iterator;

		delete aux;
	}
}

template<class Type>
Type List<Type>::front() const
{
	// If first == NULL then abort
	assert(first != NULL);
	return first->value;
}

template<class Type>
Type List<Type>::back() const
{
	// If first == NULL then abort
	assert(first != NULL);

	node* iterator = first;
	while (iterator->next != NULL)
		iterator = iterator->next;

	return iterator->value;
}

template<class Type>
Type List<Type>::getValue(unsigned int pos) const
{
	// If first == NULL then abort
	assert(first != NULL);

	unsigned int counter = 0;
	node* iterator = first;
	while (counter < pos && iterator->next != NULL)
	{
		iterator = iterator->next;
		counter++;
	}

	// If counter != pos - 1 then abort
	assert(counter == pos);

	return iterator->value;
}

template<class Type>
bool List<Type>::empty() const
{
	return first == NULL;
}

template<class Type>
int List<Type>::size() const
{
	int numElems = 0;

	if (first != NULL)
	{
		node* iterator = first;
		while (iterator != NULL)
		{
			numElems++;
			iterator = iterator->next;
		}
	}

	return numElems;
}

template<class Type>
void List<Type>::clear()
{
	if (first != NULL)
	{
		while (first != NULL)
		{
			node* aux = first;
			first = first->next;
			delete aux;
		}
	}
}

template<class Type>
void List<Type>::print() const
{
	if (first == NULL)
	{
		std::cout << "The list is EMPTY" << std::endl;
	}
	else
	{
		std::cout << std::endl;

		node* iterator = first;
		while (iterator != NULL)
		{
			std::cout << iterator->value << " ";
			iterator = iterator->next;
		}

		std::cout << std::endl;
	}
}

template<class Type>
void List<Type>::printNodes() const
{
	if (first == NULL)
	{
		std::cout << "The list is EMPTY" << std::endl;
	}
	else
	{
		std::cout << std::endl;

		node* iterator = first;
		while (iterator != NULL)
		{
			if (iterator->previous == NULL)
				std::cout << "<-| NULL | ";
			else
				std::cout << "<-| @ " << iterator->previous->value << " | ";
			
			std::cout << iterator->value;

			if (iterator->next == NULL)
				std::cout << " | NULL |->\n";
			else
				std::cout << " | @ " << iterator->next->value << " |->" << std::endl;

			iterator = iterator->next;
		}

		std::cout << std::endl;
	}
}

template <class Type>
void List<Type>::swap(unsigned int pos1, unsigned int pos2) {

	if (first == NULL) {

		cout << "List it's empty" << endl;
	}
	else {

		if (isPosCorrect(pos1) && isPosCorrect(pos2)) {

			node* iterator1 = first; //los inicializamos en first para comenzar a iterar
			node* iterator2 = first;
			int counter1 = 0;
			int counter2 = 0;

			while (counter1 = pos1) { // colocamos el iteraor1 en el primer nodo que queremos swapear
				iterator1 = iterator1->next;
				counter1++;
			}

			while (counter2 = pos1) {//colocamos el iterator2 en el segundo nodeo queu queremos swapear
				iterator1 = iterator1->next;
				counter2++;
			}
			node* prev1 = iterator1->previous; //creamos los pointers que nos ayudaran a movernos con los nodos y a swapearlos
			node* next1 = iterator1->next;
			node* prev2 = iterator2->previous;
			node* next2 = iterator2->next;

			if (pos1 != pos2 - 1 || pos2 != pos1 - 1) {
				iterator1->previous = prev2;//comienzan los cambios de pointers entre nodos
				iterator1->next = next2;
				iterator2->previous = prev1;
				iterator2->next = next1;
			}

			if (prev1 != NULL) {

				prev1->next = iterator2;
			}
			if (next1 != NULL) {

				next1->previous = iterator2;
			}
			if (prev2 != NULL) {

				prev2->next = iterator1;
			}
			if (next2 != NULL) {
				
				next2->previous = iterator1;
			}
			if (iterator2->previous == NULL) { //estos dos ultimos es para comprovar el first
				
				first = iterator2;
			}
			else if (iterator1->previous == NULL) {
				first = iterator1;
			}
		}
		else {
			cout << "Incorrect positions" << endl;
		}

	}

}

template <class Type>
void List<Type>::isPosCorrect(unsigned int pos) const {

	return pos < size();

}


#endif
