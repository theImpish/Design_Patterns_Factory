#pragma once
#include <string>

class Animal
{
public:
	std::string animalLocomotionType;
public:
	virtual void setX(int x) = 0;
	virtual void setY(int y) = 0;
	virtual void setXVelocity(int vx) = 0;
	virtual void setYVelocity(int vy) = 0;

	virtual int getX() = 0;
	virtual int getY() = 0;

	virtual int getXVelocity() = 0;
	virtual int getYVelocity() = 0;

	void setLocomotionType(std::string locomotionType);
	std::string getLocomotionType();

	virtual void speak() = 0;

	void locomotion();
};