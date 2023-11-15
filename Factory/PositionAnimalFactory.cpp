#include "PositionAnimalFactory.h"
#include "Animal.h"

PositionAnimalFactory::PositionAnimalFactory(int x, int y)
{
	xPos = x;
	yPos = y;
}

Animal* PositionAnimalFactory::createAnimal(const std::string animalType)
{

	if (animalType == "Dog")
	{
		animal = new AnimalDog();
		this->setPosition();
	}
	return animal;
}

void PositionAnimalFactory::setPosition()
{
	this->animal->setX(xPos);
	this->animal->setY(yPos);
}
