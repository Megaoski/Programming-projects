#include<iostream>
#include "Header.h"

using namespace std;

int main() {

	int item = 5;
	

	Stack <int> stackprueba(5);

	cout << "Stack is empty?  " << stackprueba.empty() << endl;
	cout << "Stack size  " << stackprueba.size() << endl;

	stackprueba.push(1);
	stackprueba.push(2);
	stackprueba.push(3);
	//stackprueba.print();
	//stackprueba.pop();
	stackprueba.print();


	cout << 
	system("pause");
	return 0;
}