#include "Animal.h"
#include <iostream>
#include <string>

void Animal::setLocomotionType(std::string locomotionType)
{
	animalLocomotionType = locomotionType;
}

std::string Animal::getLocomotionType()
{
	return animalLocomotionType;
}

void Animal::locomotion()
{
	std::string position = "(" + std::to_string(this->getX()) + "," + std::to_string(this->getY()) + ")";
	std::string speed = "(" + std::to_string(this->getXVelocity()) + "," + std::to_string(this->getYVelocity()) + ")";
	std::cout << "I'm " + animalLocomotionType + " from " + position + " at " + speed + " speed";
}
