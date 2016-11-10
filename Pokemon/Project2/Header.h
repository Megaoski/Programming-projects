#pragma once
#ifndef HEADER_H
#define HEADER_H

#include<iostream>

class Pokemon {
public:
	Pokemon(char* name, char* type)  {

		this->name = name;
		this->type = "No type";
	}
	~Pokemon(){}

	char* GetName() const {

		return name;

	}

	char* GetType() const {

		return type;
	}

protected:
	char* name;
	char* type;
};

class ElectricPokemon : public Pokemon {
public:
    ElectricPokemon(char* name, char* type) : Pokemon(name), type(type){

		
	}
	~ElectricPokemon(){}

};

#endif