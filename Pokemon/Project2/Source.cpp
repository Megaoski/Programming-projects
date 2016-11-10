#include<iostream>
#include "Header.h"

using namespace std;

int main() {

	Pokemon p1("Bulbasaur", "Fire");

	cout << p1.GetName() << endl;
	cout << p1.GetType() << endl;

	system("pause");
	return 0;
}