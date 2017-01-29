#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Header.h"

int minPlusMax(int* aray, int sizeArray)
{

	int min = aray[0];
	int max = aray[0];
	

	
		
	if (sizeArray == 1)
	{
		min = min;
		max = max;
	}
	else
	{
		for (int i = 1; i < sizeArray; i++)
		{
			if (aray[i] < min)
			{
				min = aray[i];
			}
			if(aray[i] > max)
			{
				max = aray[i];
			}

		}
	}
	
	return min + max;
}

int countWords(char* filename, char* string)
{

	int count;

	FILE* pfile;
	pfile = fopen(filename, "r");

	if (pfile != NULL)
	{
		char buff[100];

		while (feof(pfile) == 0)
		{
			fscanf(pfile, "%s", buff);
			
			if (strcmp(string, buff) == 0)
			{
				count++;
			}
		}

		fclose(pfile);
	}
	return count;
}

int main()
{

	int arr1[6] = {3, 45, 67, 1, 0, -101};
	int sizeArr1 = 6;

	int j = minPlusMax(arr1, sizeArr1);

	printf("%d", j);


	struct pixel broncon[8][8];
	struct pixel broncon2[8][8];

	int i = compareTiles(broncon, broncon2);

	printf("\n%d", i);

	system("pause");
	return 0;
}