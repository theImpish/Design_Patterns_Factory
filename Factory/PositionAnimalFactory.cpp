#include "PositionAnimalFactory.h"
#include "Animal.h"

PositionAnimalFactory::PositionAnimalFactory(int x, int y)
{
	xPos = x;
	yPos = y;
}

Animal* PositionAnimalFactory::createAnimal(std::string animalType) 
{
	Animal* animal = nullptr;

	if (animalType == "Dog")
	{
		animal = new AnimalDog();
		this->setPosition(*animal);
	}
	if (animalType == "Duck")
	{
		animal = new AnimalDuck();
		this->setPosition(*animal);
	}
	return animal;
}

void PositionAnimalFactory::setPosition(Animal& animal)
{
	animal.setX(xPos);
	animal.setY(yPos);
}

