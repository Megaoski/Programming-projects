#pragma once
#ifndef HEADER_H
#define HEADER_H
#include<iostream>
using namespace std;

template <class T>

class Stack {

public:

	Stack(int maxElements, int idTopElement, T* stackElements) : maxElements(maxElements) {

		this->idTopElement = -1;
		this->stackElements = new stackElements[maxElements];
	}

	~Stack(){}

	void push(const T& item) {

	}
	void pop();
	T top() const;

	bool empty() const;
	int size() const;

	void print() const {
		cout << stackElements << maxElements << idTopElement << endl;
	}

private:
	T* stackElements;
	int maxElements;
	int idTopElement;

};

#endif