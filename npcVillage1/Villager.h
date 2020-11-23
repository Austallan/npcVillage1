#pragma once
#include <string>

class Villager
{
public:
	void OutputData(Villager subject);
	std::string ReturnParent(Villager* PartnerPtr);
	void SetParentM(Villager* newParentM);
	void SetParentF(Villager* newParentF);

	int idNumber;
	
	int BirthYear;

	int Age;

	bool Alive;

	std::string Forename;
	std::string Surname;

	int FriendCount;

	bool Male;  //Trust me, it's easier to remember this way

	Villager *Kid[4];      //REMEMBER TO SET THE ARRAY UP FOR MAX KIDS LATER

	int KidCount;

	std::string Location;

	Villager *ParentF;

	Villager *ParentM;

	Villager *Friends[4];   //SAME BUT FOR FRIENDS, NOT AS IMPORTANT THO

	Villager *Partner;				//All of these need to be pointers to instances of the class
	
	//Myers-Briggs stuff (first letter if true)
	bool mbEI;
	bool mbSN;
	bool mbTF;
	bool mbJP;

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
};