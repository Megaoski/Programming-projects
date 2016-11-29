#pragma once

#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H


#include<iostream>
#include<assert.h>

using namespace std;
template <class T>

class DoubleList {

public:
	DoubleList<T>() {

		this->first = NULL;
	}

	~DoubleList(){}

	void pushFront(const T& elem) {

		node* aux = new node;
		aux->value = elem;
		aux->next = first;
		first = aux;

	}

	void pushBack(const T& elem) {

		node* aux = new node;
		aux->value = elem;
		aux->next = NULL;
		
		if (first != NULL) {
			 
			first = aux;
			aux->last = NULL;

		 }
		else {
			
			node* iterator = first;
			while (iterator->next != NULL) {
				iterator = iterator->next;
				aux->last = iterator;
			}
			iterator->next = aux;
			

		}
	}


	
	void printNodes() const // funcion externa por eso esta inicializacion rara
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




private:

	struct node {
		T value;
		node* next;
		node* last;
     

	};

	node* first;
};








#endif
