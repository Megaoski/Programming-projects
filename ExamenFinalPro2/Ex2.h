#pragma once
#ifndef EX2_H
#define EX2_H

#include<iostream>
using namespace std;

class Spaceship
{
public:

	Spaceship(int energy, int ammo, int speed) : energy(energy), ammo(ammo), speed(speed){};

	int getEnergyUnits() const
	{
		return energy;
	}

	int getAmmoUnits() const
	{
		return ammo;
	}

	int getSpeedUnits() const
	{
		return speed;
	}

protected:
	int energy;
	int ammo; 
	int speed;
};

class XWing : public Spaceship
{
public:

	XWing(int energy, int ammo, int speed, int shields) : Spaceship(energy, ammo, speed), shields(shields){};

	int getShieldsUnits() const
	{
		return shields;
	}

private:
	int shields;
};

class TieFighter : public Spaceship
{
public:

	TieFighter(int energy, int ammo, int sped, int powerFromGenerators) : Spaceship(energy, ammo, speed), powerFromGenerators(powerFromGenerators) {};

	int getPowerUnits() const
	{
		return powerFromGenerators;
	}

	void divertPowerToEnergy()
	{
		energy += powerFromGenerators;
		powerFromGenerators = 0;

	}

	void divertPowerToAmmo()
	{
		ammo += powerFromGenerators;
		powerFromGenerators = 0;

	}

	void divertPowerToSpeed()
	{
		speed += powerFromGenerators;
		powerFromGenerators = 0;

	}

private:
	
	int powerFromGenerators;
};



#endif