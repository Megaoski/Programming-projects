#include<iostream>
#include"Header.h"
using namespace std;

int main() {

	int item = 5;

	Queue <int>Prueba(5);

	Prueba.enqueue(3);
	Prueba.enqueue(2);
	//cout << Prueba.empty() << endl;
	//cout << Prueba.size() << endl;

	Prueba.print();


	system("pause");
	return 0;
}