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
		Animal* dog = new AnimalDog();
	}
	return nullptr;
}

