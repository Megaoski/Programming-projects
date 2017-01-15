#pragma once
#ifndef _HEADER1_H
#define _HEADER1_H

#include<iostream>
using namespace std;
typedef unsigned int uint;


class Building
{
public:
	Building(char* name) : name(name) {}
	~Building() {}

	char* GetName() const
	{
		return name;
	}

protected:
	char* name;
};

class Warehouse : public Building
{
public:

	Warehouse(char* name, uint wood, uint rocks, uint wheat) : Building(name), wood(wood), rocks(rocks), wheat(wheat) {};
	~Warehouse() {}

	void PrintResources()
	{
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

#endif