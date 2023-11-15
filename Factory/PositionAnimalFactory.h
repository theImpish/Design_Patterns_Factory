#pragma once

#include "Factory.h"

#include <string>

class PositionAnimalFactory : public Factory
{
private:
	int xPos;
	int yPos;

public:
	PositionAnimalFactory(int x, int y);

	Animal* createAnimal(std::string animalType);
	//Animal* createAnimal();
private:
	void setPosition(Animal& animal);


};
