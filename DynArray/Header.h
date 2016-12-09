#pragma once
#ifndef HEADER_H
#define HEADER_H
#define MIN_ARRAY_BLOCK_SIZE 10



template <class T>
void DynArray<T>::allocMem(unsigned int memSize) {

	T* aux = arrayElems;
	this->arrayElems = new T[memSize];

	this->memSize = memSize;
	this->numElems;


	for (int i = 0; i < this->numElems; i++) {

		this->arrayElems[i] = aux[i];
	}

	//delete aux

	if (aux != NULL) {

		delete[] aux;
	}
}
#endif
