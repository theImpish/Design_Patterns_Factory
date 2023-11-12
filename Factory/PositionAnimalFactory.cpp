#include "PositionAnimalFactory.h"
#include "Animal.h"

PositionAnimalFactory::PositionAnimalFactory(int x, int y)
{
	xPos = x;
	yPos = y;
}

Animal* PositionAnimalFactory::createAnimal(const std::string animalType)
{
	Animal* animal = nullptr;
	if (animalType == "Dog")
	{
		AnimalDog* dog = nullptr;
		animal = new AnimalDog();
	}
	return nullptr;
}

