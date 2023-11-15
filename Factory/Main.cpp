#include <iostream>
#include "AnimalDog.h"
#include "AnimalDuck.h"

int main()
{
	AnimalDog* boby = new AnimalDog();

	boby->run();
	boby->speak();
	boby->setLocomotionType("running");
	boby->locomotion();

	std::cin.get();
}