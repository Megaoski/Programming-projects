#include<iostream>
#include<string>

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

int main()
{

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

	
	Problem3(arrayProblemo3, tamaño);



	system("pause");
	return 0;
}