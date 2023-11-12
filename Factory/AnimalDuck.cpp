#include "AnimalDuck.h"

#include <iostream>


void AnimalDuck::setX(int x) { xPos = x; };
void AnimalDuck::setY(int y) { yPos = y; };
void AnimalDuck::setXVelocity(int vx) { xVelocity = vx; };

void AnimalDuck::setYVelocity(int vy) { yVelocity = vy; }

int AnimalDuck::getX() { return xPos; }
int AnimalDuck::getY() { return yPos; }
int AnimalDuck::getXVelocity() { return xVelocity; }
int AnimalDuck::getYVelocity() { return yVelocity; }

void AnimalDuck::fly() { std::cout << "look I'm flying!!!!!!!!!!!!!!!!!!!!!!!!!!!\n (ʘ‿ʘ)╯ \n"; };
void AnimalDuck::speak() { std::cout << "I'm a duck therefore I quack\n\nQUACK\tQUACK\n\n"; };