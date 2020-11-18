#pragma once
#include <string>

class Villager
{
public:
	void OutputData(Villager subject);
	std::string ReturnParentM(Villager* PartnerPtr);
	std::string ReturnParentF(Villager* PartnerPtr);

	int idNumber;

	std::string Forename;
	std::string Surname;
	
	int BirthYear;

	int Age;

	bool Male;  //Trust me, it's easier to remember this way

	bool Alive;

	std::string Location;

	Villager *Partner;				//All of these need to be pointers to instances of the class

	int KidCount;

	Villager *Kid[4];      //REMEMBER TO SET THE ARRAY UP FOR MAX KIDS LATER

	int FriendCount;

	Villager *Friends[4];   //SAME BUT FOR FRIENDS, NOT AS IMPORTANT THO


	Villager *ParentM;

	Villager *ParentF;

	enum Role
	{
		DEAD,
		FARMER,
		SMITH,
		HUNTER,
		HOUSEWIFE,
		WEAVER,
		SOLDIER,
		CHILD
	};

	Role Job;
	

	//Lots of repeating code, bit messy

	enum Wound
	{
		FINE,
		SCARRED,
		BURNED,
		CRIPPLED,		//Head crippled = DEAD
		MISSING			//Head or Torso missing = DEAD
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