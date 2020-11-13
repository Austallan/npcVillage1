#pragma once
#include <string>

class Villager
{
public:
	std::string Forename;
	std::string Surname;
	
	int Age;

	bool Gender;

	bool Alive;

	std::string Location;

	Villager *Partner;				//All of these need to be pointers to instances of the class

	Villager *Kid;      //REMEMBER TO SET THE ARRAY UP FOR MAX KIDS LATER

	int KidCount;

	Villager *Friends;   //SAME BUT FOR FRIENDS, NOT AS IMPORTANT THO

	int FriendCount;

	Villager *ParentM;

	Villager *ParentF;
	
	enum Job
	{
		FARMER,
		SMITH,
		HUNTER
	};

	//INJURIES TO BE ADDED HERE
	//Head
	//Torso
	//ArmR
	//ArmL
	//LegR
	//LegL

	//Myers-Briggs stuff
	bool mbEI;
	bool mbSN;
	bool mbTF;
	bool mbJP;
};

