#pragma once

#ifndef _HEADER_H
#define _HEADER_H

#include<iostream>
using namespace std;

template <class T, class Y>// dos clases diferentes uno para cada dat type

T summation(const T& var1,  const Y& var2)
{

	return var1 + var2;
}


template <class U>

class my2DVec
{

public:

	my2DVec(U x, U y) : x(x), y(y) {};
	~my2DVec() {}

	U GetX(U result)
	{
		x = result;
		return result;
	}

	U GetY(U result)
	{
		y = result;
		return result;
	}

	U operator+(this-> x)
	{

	}

private:

	U x;
	U y;

};

class Building
{
public:

	Building(char* name) : name(name) {};
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

	Warehouse(char* name, unsigned int wood, unsigned int wheat, unsigned int rocks) : Building(name), wood(wood), wheat(wheat), rocks(rocks) {};

private:
	unsigned int wood;
	unsigned int wheat;
	unsigned int rocks;
};
#endif