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

	void pushBack(const T& elem) {

		node* aux = new node;
		aux->value = elem;
		aux->next = NULL;

		if (first == NULL) { // significa que no hay nada en la lista, esta vacia y por lo tanto el nuevo elemento(aux) sera el head of list
			first = aux;
		}
		
		else { // no entiendo el else
			node* iterator = first;
			iterator->next 
		}

	}

	void popFront() {

		assert(first != NULL); 

	}

private:

	struct node {
		T value;
		node* next;
		node* previous;
	};
	
	node* first;
};

#endif
