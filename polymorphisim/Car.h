#pragma once
#include "transport.h"
class Car : public TransportVehicle
{
public:
	
	Car();
	Position2D pos;
	virtual void drive(char input);
};