#include<iostream>
#include<string>
#include<time.h>

using namespace std;


void Problem2(int val1, int val2, int* result)
{
	

	int resulto = val1 + val2;
	result = &resulto;

	cout << resulto << endl;
}

void Problem3(int* array, int sizeArray)
{
	for (int i = sizeArray - 1; i >= 0; i--)
	{
		cout << array[i] << " " << endl;
	}
}

void Problem4(int* Arr1, int sizeArr1, int* Arr2, int sizeArr2)
{

	

	for (int i = 0; i <= sizeArr1 - 1; i++)
	{
		Arr1[i] = abs(Arr2[i]);
		
	}

	for (int i = 0; i <= sizeArr2 - 1; i++)
	{
		
		Arr2[i] = abs(Arr1[i]);
	}


	for (int i = 0; i <= sizeArr1 - 1; i++)
	{
		cout << Arr1[i] << " " << endl;
	}
	for (int i = 0; i <= sizeArr2 - 1; i++)
	{
		cout << Arr2[i] << " " << endl;
	}

}

int main()
{
	srand(time(NULL));

	int first;
	int secondo;
	int* result = NULL;
	

	cout << " Please introduce 2 numbers: " << endl;
	cin >> first >> secondo;

	Problem2(first, secondo, result);

	int arrayProblemo3[10];
	int tamaño = 10;
	

	cout << " Please introduce 10 numbers: " << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> arrayProblemo3[i];
	 }

	
	//Problem3(arrayProblemo3, tamaño);


	int* vec1 = (int*)calloc(20, sizeof(int));
	int sizeArray1 = 20;
	int* vec2 = (int*)malloc(20 * sizeof(int));
	int sizeArray2 = 20;

	for (int i = 0; i < 20; i++)
	{
		vec2[i] = rand() % 1001; //incializamos segundo arraycon random numbers del 0 al 1000
	}

	Problem4(vec1, sizeArray1, vec2, sizeArray2);
	

	free(vec1);
	free(vec2);
	system("pause");
	return 0;
}