#pragma once

class Animal
{
public:
	virtual void setX(int x) = 0;
	virtual void setY(int y) = 0;
	virtual void setXVelocity(int vx) = 0;
	virtual void setYVelocity(int vy) = 0;
};