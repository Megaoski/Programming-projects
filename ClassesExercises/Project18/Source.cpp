#include<iostream>
#include<string>
#include"Header.h" 

int main()
{

	int a = 1;
	float b = 2.6;
	

	cout << summation(b, a) << endl; //ponemos el float primero y asi no lo transforma y lo suma correctamnte
	system("pause");
	return 0;
}