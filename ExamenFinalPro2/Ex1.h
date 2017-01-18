#pragma once

#ifndef EX1_H
#define EX1_H

#include<iostream>
using namespace std;

typedef unsigned char byte;



class Grail; // declaramos la classe antes asi funciona el friend


class Player
{
public:

	Player(char* name, byte lifeUnits) : name(name), lifeUnits(lifeUnits){};

	char* getName() { return name; }

	byte getLifeUnits() { return lifeUnits; }
   
	friend void DrinkFromGrail(Player& p, const Grail& g); // esta funcion se declara en public y no ponemos {} al final

private:
	char* name;
	byte lifeUnits;
};

class Grail
{
public:

	Grail(char* type) : type(type){};

	friend void DrinkFromGrail(Player& p, const Grail& g);

private:
	
	char* type;
};


void DrinkFromGrail(Player& p, const Grail& g)
{
	if (g.type == "Holy Grail") // or ( strcmp(g.type, "Holy Grail") == 0) INCLUYENDO LA LIBRERIA STRING
	{
		p.lifeUnits = 255;
	}
	else p.lifeUnits = 0;
}

#endif