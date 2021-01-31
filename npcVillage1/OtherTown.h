#pragma once
#include <string>

class OtherTown
{
public:

	OtherTown(std::string name, int population);

	void populationChange();
	void emigrate();

private:
	std::string townName;
	int population;

};