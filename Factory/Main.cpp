#include <iostream>
#include "AnimalDog.h"
#include "AnimalDuck.h"
#include "PositionAnimalFactory.h"
#include "SpeedAnimalFactory.h"

void pageBreak()
{

	std::cout << "\n-----------------------------------------------------------------------------\n";
}

int main()
{
	pageBreak();

	Animal* boby = new AnimalDog();

	boby->speak();
	boby->setLocomotionType("running");
	boby->locomotion();

	delete(boby);
	pageBreak();

	Factory* makeDog = new PositionAnimalFactory(5,5);

	Animal* dog = makeDog->createAnimal("Dog");
	dog->speak();
	dog->setLocomotionType("running");
	dog->locomotion();

	delete (dog);
	delete (makeDog);
	
	pageBreak();

	Factory* makeDuck = new PositionAnimalFactory(25, 50);

	Animal* duck = makeDuck->createAnimal("Duck");
	duck->speak();
	duck->setLocomotionType("flying");
	duck->locomotion();

	delete (duck);
	delete (makeDuck);
	pageBreak();

	makeDog = new SpeedAnimalFactory(5, 5, "running");

	dog = makeDog->createAnimal("Dog");
	dog->speak();
	dog->locomotion();

	delete (dog);
	delete (makeDog);
	pageBreak();

	makeDuck = new SpeedAnimalFactory(25, 50, "flying");

	duck = makeDuck->createAnimal("Duck");
	duck->speak();
	duck->locomotion();

	delete (duck);
	delete (makeDuck);
	pageBreak();

	std::cin.get();
}