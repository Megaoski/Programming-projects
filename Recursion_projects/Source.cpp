#include<iostream>
using namespace std;


int sumElemsRec(int vec[], unsigned int sizeVec, unsigned int index)
{
	if (index >= 0 && index < sizeVec)
	{
		if (index == sizeVec -1)// caso base, sólo 1 elemento
		{
			return vec[index];
		}
		else// caso de mas de un elemento en el array
		{
			return vec[index] + sumElemsRec(vec, sizeVec, index + 1);
		}
	}
	else
	{
		return 0;
	}
		

}

int numTrues(bool vec[], int sizeVec, unsigned int index)
{
	if (index >= 0 && index < sizeVec)
	{
		if (index == sizeVec - 1 )//caso base, sólo un elemento
		{
			if (vec[index] == true)
			{
				return 1; //si es true nos devuelve 1
			}
			else
			{
				return 0; //si es false nos devuelve 0
			}
		}
		else
		{
			if (vec[index] == true)
			{
				return 1 + numTrues(vec, sizeVec, index + 1); // aqui devolvemos 1 primero porque el primer caso es true(devuelve 1)
			}
			else
			{
				return numTrues(vec, sizeVec, index + 1); // la llamada recursiva ala funcion es porque sabemos que en el caso de 1 elemento
			}                                             // devuelve un resultado, i al sumarle + 1 al index recorre el arrray
			                                              // a difrencia de el if, este no devuelve 1, porque entiende que el primer numero es false
		}
	}
	else
	{
		return 0;
	}
}

//-------------------------------------------------------------------------------------------------------------------
void quickSort()
{
	int vec[6] = {0, 1, 2, 3, 4, 5};//esto es un ejemplo de como hacer un swapeo
	int aux = vec[2];
	vec[2] = vec[3];
	vec[3] = aux;   
}

int main()
{
	int array[4] = {1, 7, 6, 3};
	sumElemsRec(array, 4, 1);


	bool arr[5] = { true, false, false, false, true };


	system("pause");
	return 0;
}