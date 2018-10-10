#pragma once
#include "Position.h"
class TransportVehicle
{
	
protected:
	TransportVehicle();
	int speed;
	virtual void drive(char input)=0;
};