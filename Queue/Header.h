#pragma once
#ifndef HEADER_H
#define HEADER_H

#include<iostream>

template<class T>

class Queue {

public:
	Queue<T>(int maxElems) : maxElems(maxElems){

		this->idEndElem = -1;
		this->queueElems = new T[maxElems];

	}
	~Queue() { delete[] queueElems; }

	void enqueue(const T& item) { //FALTA RESOLVER
		
		idEndElem += 1;
		queueElems[idEndElem] = item;

	}

	T dequeue() {


		if(queueElems == 0 || idEndElem == -1){

			cout << "Queue is empty" << endl;
		
		}
		else {

			int returno = queueElems[0];
			for (int i = 0; i <= idEndElem; i++) {

				queueElems[i] = queueElems[i + 1];
			}
			idEndElem--;
			return returno;
		}

		
	}

	bool empty() const {

		if (maxElems == -1) {

			return true;
		}

		else {
			return false;
		}

	}

	int size() const {

		return idEndElem + 1;

	}

	void print() const {

		for (int i = 0; i < maxElems; i++) {

			cout << queueElems[i] << endl;
		}

	}

private:
	T* queueElems;
	int maxElems;
	int idEndElem;
};

#endif
