#pragma once
#include <string>

class Villager
{
public:
	void OutputData();
	std::string ReturnParent(Villager* PartnerPtr);
	std::string ReturnParentF();
	std::string ReturnParentM();
	void SetParentM(Villager* newParentM);
	void SetParentF(Villager* newParentF);

	void ScarVillager(Villager &activeVillagerX);
	void BurnVillager(Villager &activeVillagerX);
	void CrippleVillager(Villager &activeVillagerX);
	void SeverVillager(Villager &activeVillagerX);

	void SimulateYear(Villager(&villagerArray)[3000], int population, Villager &activeVillager, std::string(foreNamesM)[241], int foreMLength, std::string(foreNamesF)[328], int foreFLength, std::string(surnames)[2089], std::string theTown, int& activeVillagersRef, int currentYear);
	void NaturalCausesDeath();
	void PerformJob(Villager &activeVillager2);
	void SeekPartner(Villager(&villagerArray)[3000], int population, Villager &activeVillager1);
	void SeekFriend(Villager(&villagerArray)[3000], int population, Villager &activeVillager1);
	void HaveChild(Villager(&villagerArray)[3000], Villager &mother, Villager &father, std::string(foreNamesM)[241], int foreMLength, std::string(foreNamesF)[328], int foreFLength, std::string theTown, int& activeVillagersRef, int currentYear);
	void GrowUp(Villager(villagerArray)[3000], int activeRef);
	void addDialogue(std::string Q, std::string A);
	void editDialogue(std::string Qprefix, std::string Qsuffix, std::string Aprefix, std::string Asuffix);
	void fillDialogue(int &dialogueOption);
	std::string returnMBType();
	std::string returnRole();
	std::string returnMale();
	std::string returnPartnerID();

	int idNumber;//will help with identification at output
	
	bool Male;  //Trust me, it's easier to remember this way

	int BirthYear;

	int Generation; //FULLY FLESH THIS OUT NERD

	int Age;

	bool Alive;

	bool isPregnant;

	std::string Forename;
	std::string Surname;

	int FriendCount;

	Villager *Kid[6];      //Slot 0 is always left empty, please ignore that I was very tired when I did it and can't remember if there was a good reason or not

	int KidCount;

	int activeDialogue; //The dialogue to be edited next

	std::string dialogue[5][2];

	int dCount; //how many times (if any) that all 5 dialogues have been looped over

	std::string Location;

	Villager *ParentF;//Female Parent

	Villager *ParentM;//Male Parent

	Villager *Friends[4];   

	Villager *Partner;		
	
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