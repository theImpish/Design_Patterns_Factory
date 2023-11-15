#include "AnimalDog.h"
#include <iostream>
#include <string>

void AnimalDog::setX(int x) { xPos = x; };
void AnimalDog::setY(int y) { yPos = y; };
void AnimalDog::setXVelocity(int vx) { xVelocity = vx; };

void AnimalDog::setYVelocity(int vy) { yVelocity = vy; }

int AnimalDog::getX() { return xPos; }
int AnimalDog::getY() { return yPos; }
int AnimalDog::getXVelocity() { return xVelocity; }
int AnimalDog::getYVelocity() { return yVelocity; }

void AnimalDog::run() { std::cout << "look I'm running!!!!!!!!!!!!!!!!!!!!!!!!!!!\n (ʘ‿ʘ)╯ \n"; };
void AnimalDog::speak() { std::cout << "I'm a dog therefore I bark\nWOOF\tWOOF\n\n"; };