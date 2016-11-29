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

	~DoubleList() {}

	void pushFront(const T& elem) {

		node* aux = new node;
		aux->value = elem;
		aux->next = first;
		aux->last = NULL;
		if (first != NULL) first->last = aux;
		first = aux;
		delete aux;

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
			while (iterator->next != NULL) { //asignamos el iterator al ultimo miembro
				iterator = iterator->next;
				aux->last = iterator;
			}
			aux->last = iterator; // ahora el previous del aux apunta al itinerator y solo falta cambiar el next de iterator a aux
			iterator->next = aux;
			

		}
		delete aux;
	}

	void popFront() {

		if (first == NULL) {

			cout << "List is already empty" << endl;

		}

		else {
			node* aux = first->next;
			delete first;
			first = aux;
			if (first != NULL) first->last = NULL;
		}
	}

	void popBack() {

		if (first == NULL) {
			cout << "List is already empty" << endl;
		}
		else if (first->next == NULL) popFront();
		else {
			//FALTA CODE DE ELSE
		}
	}

	void insert(unsigned int pos, const T& elem) {

		if (pos == 0) {

			pushFront(elem); // en este caso queremos ponerlo en la primera posicion, es lo mismo que el pushFront
		}
		else {
			
			node* aux = new node;
			aux->value = elem;
			node* iterator = first;
			unsigned counter = pos - 1;

			while (counter != 0 && iterator->next != NULL) {// counter ira al elemento de antes del que nos han pedido, para poder insertar el elemento
				
				iterator = iterator->next;
				counter--;
			} //A PARTIR DE AQUI INSERT ES COPI PASTE DE LA LINKED LIST, NECESITA HECHARLE UN OJO
			if (iterator->next == NULL && counter == pos - 1) {// ha salido porque no ha llegado a la posicion

				cout << "Error" << endl;
			}

			node* item = new node;
			item->value = elem;
			item->next = iterator->next;
			iterator->next = item;
		}
	}  

	//FALTA EL REMOVE ENTERO, PEDIR A ANDREU

	//GETVALUE ES EL MISMO METHOD QUE EL DE LINKED LIST
	
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
