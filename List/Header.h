#pragma once
#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include<assert.h>
template <class T>

class List {

public:

	List <T>() {

		this->first = NULL;
	}

	~List(){}


	void pushBack(const T& elem){ 

		node* aux = new node;
		aux->value = elem;
		aux->next = NULL; 
		
		if (first == NULL) {

			first = aux;

		}
		else {

			node* iterator = first;
			while (iterator->next != NULL)
				iterator = iterator->next;

			iterator->next = aux;


		}
		
	}

	void pushFront(const T& elem) {

		node* aux = new node;
		aux->value = elem;
		aux->next = first;
		first = aux;
	

	}

	void popFront() {

		assert(first != NULL);

		node aux = first;
		first = first->next;
		delete aux;

	}

	void popBack() {

		assert(first != NULL);

		if (first->next == NULL) {

			delete first;
			first = NULL;

		}
		else {
			node* iterator = first;
			while(iterator)

		}

	}

private:
	struct node {
		T value;
		node* next;
	};

	node* next; //unico atributo de la linked list
	

};

#endif
