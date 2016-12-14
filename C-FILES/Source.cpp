#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main() {

	int c;
	FILE* fpointer;
	fpointer = fopen("LoremIpsum.txt", "r");
	

	if (fpointer != NULL) {

		//fprintf(fpointer, "HOLA MUNDO");

		while ((c = getc(fpointer)) != EOF)
			putchar(c);

		fclose(fpointer);
	}
	else {
		printf("File could not be opened.\n");

	}

	system("pause");
	return 0;
}