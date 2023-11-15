#pragma once
#include "Factory.h"

class SpeedAnimalFactory :public Factory
{
private:
	int xVelocity;
	int yVelocity;
	std::string animalLocomotionType;

public:
	SpeedAnimalFactory(int vx, int vy, std::string locomotion);

	Animal* createAnimal(std::string animalType);
private:
	void setSpeed(Animal& animal);

};