#include "OtherTown.h"

OtherTown::OtherTown(std::string name, int startPop)
{
	townName = (name + "town");
	population = startPop;
}

void OtherTown::populationChange()
{
	population = population + (rand() % 3 -1);

	if (population > 20)
		emigrate();
}

void OtherTown::emigrate()
{
	population--;

}