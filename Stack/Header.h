#pragma once
#ifndef HEADER_H
#define HEADER_H

#include<iostream>
using namespace std;

template <class T>

class Stack {

public:

	Stack<T>(int maxElements) : maxElements(maxElements) {

		this->idTopElement = -1;

		if (maxElements > 0) {
			this->stackElements = new T[maxElements];
		}
		else // asi si lo que introduce el usuario es mas pequeño que cero no hace falta alocatar memoria, lo inc¡icializamos a 0.
			this->stackElements = NULL;
	}

	~Stack() { delete[] stackElements ;}

	void push(const T& item) {

		if (idTopElement < maxElements) {

			idTopElement += 1;
            stackElements[idTopElement] = item;
		}

	}

	void pop() {

		if (idTopElement >= 0) {
			idTopElement -= 1;
		}
		
		
		
	}

	T top() const {

		if (idTopElement >= 0) {

			return stackElements[idTopElement];
		}
		else {
			return 0;
		}
	}

	bool empty() const {

		if (maxElements == -1) {
			 
			return true;
		}
		else {

			return false;
		}
	}

	int size() const {

		return idTopElement + 1;
	}

	void print() const {

		for (int i = 0; i <= maxElements; i++) {

			cout << stackElements[i] << endl;
		}
	}

private:
	T* stackElements;
	int maxElements;
	int idTopElement;

};

#endif