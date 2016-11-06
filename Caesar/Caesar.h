#pragma once
#ifndef CAESAR_H
#define CAESAR_H
using namespace std;
typedef unsigned int uint;

class Building {
public:

	Building(char*name) : name(name) {};
	~Building() {}

	char* GetName() const {

		return name;
	}
protected:

	char* name;
};

class Warehouse : public Building {
public:

	Warehouse(char* name, uint wood, uint rocks, uint wheat) : Building(name), wood(wood), rocks(rocks), wheat(wheat) {}
	~Warehouse() {}

	void PrintResources() const { 
		cout << GetName() << endl;
		cout << "Wood: " << wood << endl;
		cout << "Rocks: " << rocks << endl;
		cout << "Wheat: " << wheat << endl;
	}

private:

	uint rocks;
	uint wheat;
	uint wood;
};

class House : public Building {

public:
	House(char* name, uint floors, uint inhabitants, uint servants) : Building(name), floors(floors), inhabitants(inhabitants), servants(servants){}
	~House() {}

	void PrintHouse() const {
		cout << GetName() << endl;
		cout << "Floors: " << floors << endl;
		cout << "Inhabitants: " << inhabitants << endl;
		cout << "Servants: " << servants << endl;
  
	}

private:
	uint floors;
	uint inhabitants;
	uint servants;
	

};

class Temple : public Building {
public:

	Temple(char* name, char* god, uint priests) : Building(name), god(god), priests(priests){}
	~Temple() {}

public:

	void PrintTemple() const {
		cout << GetName() << endl;
		cout << "God: " << god << endl;
		cout << "Priests: " << priests << endl;
	}

private:
	char* god;
	uint priests;
};



#endif
