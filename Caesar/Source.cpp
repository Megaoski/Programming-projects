#include<iostream>
#include"Caesar.h"
using namespace std;

int main() {

	Building A("East Warehouse");
	Warehouse B("-- East Warehouse --", 10, 20, 30);
	House C("-- Agripa's House --", 2, 5, 10);
	Temple D("-- Mercury's Temple --", "Mercury", 3);

	cout << "Warehouse name: " << A.GetName() << endl;
	cout << "\n" << endl;
	B.PrintResources();
	cout << "\n" << endl;
	C.PrintHouse();
	cout << "\n" << endl;
	D.PrintTemple();


	system("pause");
	return 0;
}

