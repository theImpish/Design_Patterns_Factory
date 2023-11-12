#pragma once

#include "Factory.h"

#include <string>

class PositionAnimalFactory : Factory
{
public:
	PositionAnimalFactory(int x, int y);
	Animal* createAnimal(const std::string animalType);
private:
	int xPos;
	int yPos;

};
