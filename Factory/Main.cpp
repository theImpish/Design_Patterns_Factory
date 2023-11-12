#include <iostream>
#include "AnimalDog.h"
#include "AnimalDuck.h"

int main()
{
	AnimalDog* boby = new AnimalDog();

	boby->run();
	boby->speak();

	std::cin.get();
}