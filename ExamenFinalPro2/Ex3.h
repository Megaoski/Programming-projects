#pragma once
#ifndef EX3_H
#define EX3_H

#include<iostream>

class List
{

public:

	bool operator ==(const List& l) const
	{
		bool endlist1 = this->first == NULL; // variable que almacena la primera lista que comparamos iniciada a vacio
		bool endlist2 = l.first == NULL;//lo mismo pero esta vez es la segunda lista, la que pasamos como referencia

		if (endlist1 && endlist2)//si las dos listas que comparamos estan vacas devolvemos verdad, porque son iguales
		{
			return true;
		}
		else if (endlist1 || endlist2) // si una de las listas esta vacia devolvemos falso al ser diferentes
		{
			return false;
		}
		else
		{
			node* iteratorList1 = first; //creamos un pointer node para la primera lista que apunta al first, el primer miembro de la lista
			node* iteratorList2 = l.first;// lo mismo para la segunda lista

			while (!endlist1 && !endlist2)// este while  recorre las dos listas hasta el final
			{
				if (iteratorList1->value != iteratorList2->value)//si el primer valor es diferente devuelve falso
				{
					return false;
				}

				iteratorList1 = iteratorList1->next;//hacemos que el iterator pase del primer miembro al siguiente de la lista
				iteratorList2 = iteratorList2->next;

				endlist1 = iteratorList1 == NULL;// esto es el final de cada lista
				endlist2 = iteratorList2 == NULL;

			}

			if (endlist1 && endlist2)//si las dos listas que comparamos estan vacas devolvemos verdad, porque son iguales
			{
				return true;
			}
			else
				return false;
		}
	}

private:

	struct node {
		int value;
		node* next;
	};

	node* first;
};

#endif