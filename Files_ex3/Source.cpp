#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int filesEqual(char* filename, char* filename2) // ejercicio files numero 3
{


	FILE* pfilon;
	FILE* pfilon2;

	char str1[100];
	char str2[100];
	int result = 0;
	pfilon = fopen(filename, "r");
	pfilon2 = fopen(filename2, "r");

	if (filename && filename2 != NULL) {

		while(feof(pfilon) == 0 && feof(pfilon2) == 0)
		{
			fscanf(pfilon, "%s", &str1);
			fscanf(pfilon2, "%s", &str2);

			if (strcmp(str1, str2) != 0)
			{
				return 0;
			}
			
		}
		if (feof(pfilon) != 0 && feof(pfilon2) != 0) 
		{
			return 1;
		}
		fclose(pfilon);
		fclose(pfilon2);
	}
	else {
		printf("Error");
		return -1;
	}
	return result;
}

int main() {
	
	
	int result = filesEqual("pirata.txt", "pirata2.txt");
	printf("%d", result); // da 0, son diferentes los dos archivos txt


	system("pause");
	return 0;
}