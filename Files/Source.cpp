#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h> 



int main() {

	int min = -10;
	int max = 10;

	FILE* fpointer;
	fpointer = fopen("numbers.txt", "w"); //creamos archivo y escribimos ../../numbers.txt (guarda archivo en carpeta abuela)

	if (fpointer != NULL) {

		for (int i = min; i <= max; i++) {

			fprintf(fpointer," %d ", i);
		}


		fclose(fpointer);
	}
	else {
		printf("Error");
	}
	//------------------------------------------------------
	char zero;
	int count = 0;

	FILE* pfile;
	pfile = fopen("numbers.txt", "r");

	if (pfile != NULL) {

		while (feof(pfile) == 0) {

			
			fscanf(pfile, "%c", &zero);
			if (zero == '0') {
				count = count + 1;
			}
		}

		printf("%d", count);

		fclose(pfile);
	}
	else {
		printf("Error");
	}

	

	system("pause");
	return 0;
}