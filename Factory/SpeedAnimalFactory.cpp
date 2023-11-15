#include "SpeedAnimalFactory.h"

SpeedAnimalFactory::SpeedAnimalFactory(int vx, int vy, std::string locomotion)
{
	xVelocity = vx;
	yVelocity = vy;
	animalLocomotionType = locomotion;
}

Animal* SpeedAnimalFactory::createAnimal(std::string animalType)
{
	Animal* animal = nullptr;

	if (animalType == "Dog")
	{
		animal = new AnimalDog();
		this->setSpeed(*animal);
	}
	if (animalType == "Duck")
	{
		animal = new AnimalDuck();
		this->setSpeed(*animal);
	}
	return animal;
}

void SpeedAnimalFactory::setSpeed(Animal& animal)
{
	animal.setXVelocity(xVelocity);
	animal.setXVelocity(yVelocity);

	animal.setLocomotionType(animalLocomotionType);
}

