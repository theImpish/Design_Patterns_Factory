#pragma once
#include "Animal.h"
#include "AnimalDog.h"

class Factory
{
public:
	virtual Animal* createAnimal() = 0;

};

