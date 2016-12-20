#include<iostream>
using namespace std;


void bubbleSort(int vec[], int vecSize)
{
	
	int i, j;

	for (int i = 0; i <= vecSize - 1; i++)
	{
		cout << "Enter a number: " << endl;
		cin >> vec[i];
	}

	for (i = 0; i <= vecSize - 2; i++)
	{
		for (j = i + 1; j <= vecSize - 1; j++)
		{
			int aux;

			if (vec[i] > vec[j])//swap
			{
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}

	for (i = 0; i <= vecSize - 1; i++)
	{
		cout << vec[i] << endl;
	}
}



int main()
{
	int arr[7];
	bubbleSort(arr, 7);


	system("pause");
	return 0;
}