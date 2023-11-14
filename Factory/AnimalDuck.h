#pragma once

#include "Animal.h"

class AnimalDuck : public Animal
{
private :
	int xPos;
	int yPos;
	int xVelocity;
	int yVelocity;

public:
	void setX(int x);
	void setY(int y);
	void setXVelocity(int vx);
	void setYVelocity(int vy);

	int getX();
	int getY();
	int getXVelocity();
	int getYVelocity();

	void fly();
	void speak();
};