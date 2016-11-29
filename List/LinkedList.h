#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
#include<assert.h>

using namespace std;
template <class T>

class List {

public:

	List <T>() {

		this->first = NULL;
	}

	~List() {}

	void pushFront(const T& elem) {

		node* aux = new node;
		aux->value = elem;
		aux->next = first;
		first = aux; // now aux , the new elemnt is the first or the head of the list

	}

	void pushBack(const T& elem) { // crear nuevo nodocon el elem, recorrer lista hasta el final y por ultimo isertamos nuevo nodo,
		                           // para hacer eso haremos updates
		node* aux = new node;
		aux->value = elem;
		aux->next = NULL; // como sera el del final apuntara a NULL

		if (first == NULL) { // significa que no hay nada en la lista, esta vacia y por lo tanto el nuevo elemento(aux) sera el head of list
			first = aux; // pushFront(); tambien vale
		}
		
		else { 
			

			node* iterator = first; //este iterator nos permite recorrer la lista hasta llegar al final, esta apuntando al principio de la list
			while (iterator->next != NULL) { //recorre la lista
				iterator = iterator->next;
			}
			iterator->next = aux;
		}
		
	}

	void popFront() {

		assert(first != NULL); 

	}

	void popBack(){}

	void insert (unsigned int pos, const T& elem) {

		if (pos == 0) {

			pushFront(elem); // en este caso queremos ponerlo en la primera posicion, es lo mismo que el pushFront
		}
		else {
			assert(first != NULL);

			unsigned int counter = 0;
			node* iterator = first;

			while (counter < pos - 1 && iterator->next != NULL) {// counter ira al elemento de antes del que nos han pedido, para poder insertar el elemento
				counter++;
				iterator = iterator->next;
			}
			if (iterator->next == NULL && counter == pos - 1) {// ha salido porque no ha llegado a la posicion

				cout << "Error" << endl;
			}

			node* item = new node;
			item->value = elem;
			item->next = iterator->next;
			iterator->next = item;
		}
	}

	void remove(unsigned int pos){

		assert(first != NULL);

		unsigned int counter = 0;
		node* iterator = first;

		while (counter < pos - 1 && iterator->next != NULL) {// counter ira al elemento de antes del que nos han pedido, para poder insertar el elemento, o antes de que acabe la lista
			counter++;
			iterator = iterator->next;
		}
		if (iterator->next == NULL && counter == pos - 1) {//comprobamos que no se pase de la lista

			cout << "Error of position" << endl;
		}

		else {
			node* temporal = iterator->next; // creamos un nuevo node llamado temporal y lo utilizamos para eliminar el elemnto que queremos remover
			iterator->next = temporal->next; // no hacemos new node porque lo eliminaremos ahora
			delete temporal;

		}
	}

		
	

	
	T front() const{}
	T back() const{}
	T getValue(unsigned int pos) const{}
	bool empty() const{}

	int size() const{
	
		unsigned int counter = 0;
		node* iterator = first;
		if (first->next == NULL) {
			cout << "Empty List, 0 elements" << endl;
		}

		
	}

	bool empty(){}
	void clear(){}

	void printNodes() const;
	void print(){}

private:

	struct node {
		T value;
		node* next;
	
	};
	
	node* first;
};

template <class T>
void List<T>::printNodes() const // funcion externa por eso esta inicializacion rara
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
			std::cout << "| " << iterator->value;

			if (iterator->next == NULL)
				std::cout << " | NULL |->\n";
			else
				std::cout << " | @node( " << iterator->next->value << " )|->" << std::endl;

			iterator = iterator->next;
		}

		std::cout << std::endl;
	}
}


#endif
