#include<stdio.h>
#include<string.h>

typedef short byte;

int sumMultiples(int minimum, int maximum) {

	int result = 0;

	for (int i = minimum; i <= maximum; i++) {

		if (i % 5 == 0 && i % 2 != 0 && i % 3 != 0) {

			result = result + i;
		}
	}

	return result;

}

int isPalindrom(char* str) {
	int size = strlen(str) - 1;// para evitar el \0
	int pali = 1;
	
	for (int i = 0; i < size / 2; i++) {// el size / 2 funciona con palabras pares e impares abba, abbnbba;
		if (str[i] == str[size - i]) {
			pali = 1;
		}
		else {
			pali = 0;
			break; // we can use a condition in the for insted of the break, for (int i = 0; i < size / 2 && pal == 1; i++)
		}
	}

	return 0;
}

int getNumEmptyPotions(byte potions) {

	unsigned short numEmptyPotions // falta acabarlo pero haciendo que cuenta las pociones llenas(1)
}

int main() {

	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 6, 7, 8, 9, 10 };

	int arrauxiliar[5]; // se puede hacer con un int auxiliar sólo, porque cambiamos elemento a elemento int aux;
	

	for (int i = 0; i < 5; i++) {

		arrauxiliar[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arrauxiliar[i];

	}

	for (int i = 0; i < 5; i++) {

		printf("%d", arr1[i]);
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {

		printf("%d", arr2[i]);
	}
	// hasta aqui ejercicio 1
	
	int a = 1;
	int b = 10;

	int p = sumMultiples(-10, 10);

	printf("%d", p); // se puede hacer sin int a y b, tan solo meteiendo los parametros directo en la funcion
	//hasta aqui ejercicio 2

	char* palindromo = "aabba";
	int pali;

	pali = isPalindrom(palindromo);

	printf("%d", pali);
	//hasta aqui ejercicio 3


	getchar();
	return 0;
}

