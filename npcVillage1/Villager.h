#pragma once
#include <string>

class Villager
{
public:
	void OutputData();
	std::string ReturnParent(Villager* PartnerPtr);
	void SetParentM(Villager* newParentM);
	void SetParentF(Villager* newParentF);

	void ScarVillager(Villager &activeVillagerX);
	void BurnVillager(Villager &activeVillagerX);
	void CrippleVillager(Villager &activeVillagerX);
	void SeverVillager(Villager &activeVillagerX);

	void SimulateYear(Villager(&villagerArray)[3000], int population, Villager &activeVillager, std::string(&foreNamesM)[241], int foreMLength, std::string(&foreNamesF)[328], int foreFLength, std::string(&surnames)[2089], std::string theTown, int& activeVillagersRef, int currentYear);
	void NaturalCausesDeath();
	void PerformJob(Villager &activeVillager2);
	void SeekPartner(Villager(&villagerArray)[3000], int population, Villager &activeVillager1);
	void HaveChild(Villager(&villagerArray)[3000], Villager &mother, Villager &father, std::string(&foreNamesM)[241], int foreMLength, std::string(&foreNamesF)[328], int foreFLength, std::string theTown, int& activeVillagersRef, int currentYear);
	void GrowUp();

	int idNumber;//will help with identification at output
	
	bool Male;  //Trust me, it's easier to remember this way

	int BirthYear;

	int Age;

	bool Alive;

	bool isPregnant;

	std::string Forename;
	std::string Surname;

	int FriendCount;

	Villager *Kid[4];      //REMEMBER TO SET THE ARRAY UP FOR MAX KIDS LATER

	int KidCount;

	std::string Location;

	Villager *ParentF;//Female Parent

	Villager *ParentM;//Male Parent

	Villager *Friends[4];   //SAME BUT FOR FRIENDS, NOT AS IMPORTANT THO VVVVV

	Villager *Partner;		//All of these need to be pointers to instances of the class
	
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

	int deathRisk;
};