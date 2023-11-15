#pragma once
#include "Animal.h"
#include "AnimalDog.h"
#include "AnimalDuck.h"

class Factory
{
private:
	std::string animalKind;
public:
	virtual Animal* createAnimal(std::string kind) = 0;

	void setAnimalKind(std::string kind) { animalKind = kind; }
	std::string getAnimalKind() { return animalKind; }

};


