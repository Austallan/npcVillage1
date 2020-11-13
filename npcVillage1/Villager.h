#pragma once
#include <string>

class Villager
{
public:
	void OutputData(Villager subject);

	std::string Forename;
	std::string Surname;
	
	int Age;

	bool Male;  //Trust me, it's easier to remember this way

	bool Alive;

	std::string Location;

	Villager *Partner;				//All of these need to be pointers to instances of the class

	Villager *Kid;      //REMEMBER TO SET THE ARRAY UP FOR MAX KIDS LATER

	int KidCount;

	Villager *Friends;   //SAME BUT FOR FRIENDS, NOT AS IMPORTANT THO

	int FriendCount;

	Villager *ParentM;

	Villager *ParentF;

	class Job  //Hoping this works, should help later expansion
	{
	public:
		enum Role
		{
			DEAD,
			FARMER,
			SMITH,
			HUNTER,
			HOUSEWIFE,
			WEAVER,
			SOLDIER
		};
	};

	Job Profession;

	//Lots of repeating code, may as well class it to keep track of wound condition
	class Wound
	{
	public:
		enum Condition
		{
			FINE,
			SCARRED,
			BURNED,
			CRIPPLED,		//Head crippled = DEAD
			MISSING			//Head or Torso missing = DEAD
		};
	};

	//INJURIES 
	Wound Head;
	Wound Torso;
	Wound ArmR;
	Wound ArmL;
	Wound LegR;
	Wound LegL;

	//Myers-Briggs stuff (first letter if true)
	bool mbEI;
	bool mbSN;
	bool mbTF;
	bool mbJP;
};