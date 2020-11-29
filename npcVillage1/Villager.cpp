#include "Villager.h"
#include <iostream>



//FUNCTIONS DOWN HERE												FUNCTIONS DOWN HERE
//VVVVVVVVVVVVVVVVVVV												VVVVVVVVVVVVVVVVVVV
std::string Villager::ReturnParent(Villager* PartnerPtr)
{
	std::string tempHolder;
	std::string tempForename = PartnerPtr->Forename;
	std::string tempSurname = PartnerPtr->Surname;

	tempHolder = tempForename + " " + tempSurname;

	return tempHolder;
}

//SetParentM and SetParentF are redundant atm, but are being kept to make it easier to encapsulate everything later if there is time
void Villager::SetParentM(Villager* newParentM)
{
	ParentM = newParentM;
}

void Villager::SetParentF(Villager* newParentF)
{
	ParentF = newParentF;
}

void Villager::NaturalCausesDeath()
{
	

	if ((rand() % 100 + 70) < (Age + deathRisk))
	{
		Alive = false;
		Job = DEAD;
		std::cout << Forename << " " << Surname << " has died of natural causes at the age of " << Age << "\n";
	}
}

void Villager::PerformJob()
{

}

void Villager::SeekPartner(Villager(&villagerArray1)[300], int population1, Villager &activeVillager1)
{
	int mbSimilarity;

	for (int i = 0; i < population1; i++)
	{
		if (Partner == nullptr)
		{
			if ((Male != villagerArray1[i].Male) && (villagerArray1[i].Partner == nullptr))
			{
				if ((Age - villagerArray1[i].Age < 10) || (villagerArray1[i].Age - Age < 10))
				{
					if (villagerArray1[i].Male == false)
					{
						mbSimilarity = 0;

						if (mbEI == villagerArray1[i].mbEI)
						{
							mbSimilarity++;
						}

						if (mbSN == villagerArray1[i].mbSN)
						{
							mbSimilarity++;
						}

						if (mbTF == villagerArray1[i].mbTF)
						{
							mbSimilarity++;
						}

						if (mbJP == villagerArray1[i].mbJP)
						{
							mbSimilarity++;
						}

						if (mbSimilarity > 1)
						{
							Partner = &villagerArray1[i];
							villagerArray1[i].Partner = &activeVillager1;

							std::cout << " " << Forename << " " << Surname << " married " << villagerArray1[i].Forename << " " << villagerArray1[i].Surname << "\n";

							if (Male)
							{
								villagerArray1[i].Surname = Surname;
							}
							else
							{
								Surname = villagerArray1[i].Surname;
							}
						}
					}
				}
			}
		}
	}
}

//run each potential yearly activity for a villager, as well as incrementing yearly values
void Villager::SimulateYear(Villager(&villagerArray)[300], int population, Villager &activeVillager)
{
	//The dead can be skipped
	if (Alive)
	{
		Age++;

		PerformJob();

		if ((Partner == nullptr) && (Age > 17))
		{
			SeekPartner(villagerArray, population, activeVillager);
		}

		NaturalCausesDeath(); //do this last to account for and deathRisk gained in the year
	}
}


//Print all the data for all villagers to the console
void Villager::OutputData()
{
	//Villager ID number
	std::cout << "\n Villager ID: " << idNumber;

	//Foraname and Surname
	std::cout << "\n Full Name: " << Forename << " " << Surname;
	
	//Age, gender and Alive status
	std::cout << "\n Age: " << Age << "		Gender: ";
	if (Male)
	{
		std::cout << "Male";
	}
	else
	{
		std::cout << "Female";
	}

	std::cout << "		Status: ";
	
	if (Alive)
	{
		std::cout << "Alive";
	}
	else
	{
		std::cout << "Deceased";
	} 

	//Parents
	std::cout << "\n Father: ";
		if (ParentF != NULL)
		{
			std::cout << ReturnParent(ParentF) << "   ";
		}
		else 
		{
			std::cout << "Lost to time		";
		}

		std::cout << "Mother: ";
		if (ParentM != NULL)
		{
			//std::cout << subject.ParentF->Forename << " " << subject.ParentF->Surname;
			std::cout << ReturnParent(ParentM);
		}
		else
		{
			std::cout << "Lost to time";
		}

	//Current location
		std::cout << "\n Current Residence: " << Location;

	//Partner status and/or name
		std::cout << "\n Current Partner: ";
		if (Partner == NULL)
		{
			std::cout << "No Partner";
		}
		else
		{
			std::cout << Partner->Forename << " " << Partner->Surname;
		}

	//Number of kids, list any kids
		std::cout << "\n Number of Children: " << KidCount;
		if (KidCount > 0)
		{
			//loop for number of kids to display their names
			for (int i = 0; i < KidCount; i++)
			{
				std::cout << "\n" << Kid;
			}
		}

	//Number of friends, list any friends
		std::cout << "\n Number of Friends: " << FriendCount;
		if (FriendCount > 0)
		{
			//loop for number of friends to display their names
			for (int i = 0; i < FriendCount; i++)
			{
				std::cout << "\n" << Friends;
			}
		}

	//Myers-Briggs type
		std::cout << "\n Myers-Briggs Type: ";
			if (mbEI)
			{
				std::cout << "E";
			}
			else
			{
				std::cout << "I";
			}

			if (mbSN)
			{
				std::cout << "S";
			}
			else
			{
				std::cout << "N";
			}

			if (mbTF)
			{
				std::cout << "T";
			}
			else
			{
				std::cout << "F";
			}

			if (mbJP)
			{
				std::cout << "J";
			}
			else
			{
				std::cout << "P";
			}

	//Profession
			std::cout << "\n Profession: ";

			switch (Job)
			{
			case DEAD:
				std::cout << "Dead";
				break;

			case FARMER:
				std::cout << "Farmer";
				break;

			case SMITH:
				std::cout << "Smith";
				break;

			case HUNTER:
				std::cout << "Hunter";
				break;

			case HOUSEWIFE:
				std::cout << "Housewife";
				break;

			case WEAVER:
				std::cout << "Weaver";
				break;

			case SOLDIER:
				std::cout << "Soldier";
				break;

			case CHILD:
				std::cout << "Child";
				break;
			}

	//Injuries
			//Head
			std::cout << "\n Head Status: ";

			switch (Head)
			{
			case FINE:
				std::cout << "Fine";
				break;

			case SCARRED:
				std::cout << "Scarred";
				break;

			case BURNED:
				std::cout << "Burned";
				break;

			case CRIPPLED:
				std::cout << "Crippled";
				break;

			case MISSING:
				std::cout << "Missing";
				break;
			}
			

			//Torso
			std::cout << "\n Torso Status: ";

			switch (Torso)
			{
			case FINE:
				std::cout << "Fine";
				break;

			case SCARRED:
				std::cout << "Scarred";
				break;

			case BURNED:
				std::cout << "Burned";
				break;

			case CRIPPLED:
				std::cout << "Crippled";
				break;

			case MISSING:
				std::cout << "Missing";
				break;
			}


			//Right Arm
			std::cout << "\n Right Arm Status: ";

			switch (ArmR)
			{
			case FINE:
				std::cout << "Fine";
				break;

			case SCARRED:
				std::cout << "Scarred";
				break;

			case BURNED:
				std::cout << "Burned";
				break;

			case CRIPPLED:
				std::cout << "Crippled";
				break;

			case MISSING:
				std::cout << "Missing";
				break;
			}


			//Left Arm
			std::cout << "\n Left Arm Status: ";

			switch (ArmL)
			{
			case FINE:
				std::cout << "Fine";
				break;

			case SCARRED:
				std::cout << "Scarred";
				break;

			case BURNED:
				std::cout << "Burned";
				break;

			case CRIPPLED:
				std::cout << "Crippled";
				break;

			case MISSING:
				std::cout << "Missing";
				break;
			}


			//Right Leg
			std::cout << "\n Right Leg Status: ";

			switch (LegR)
			{
			case FINE:
				std::cout << "Fine";
				break;

			case SCARRED:
				std::cout << "Scarred";
				break;

			case BURNED:
				std::cout << "Burned";
				break;

			case CRIPPLED:
				std::cout << "Crippled";
				break;

			case MISSING:
				std::cout << "Missing";
				break;
			}


			//Left Leg
			std::cout << "\n Left Leg Status: ";

			switch (LegL)
			{
			case FINE:
				std::cout << "Fine";
				break;

			case SCARRED:
				std::cout << "Scarred";
				break;

			case BURNED:
				std::cout << "Burned";
				break;

			case CRIPPLED:
				std::cout << "Crippled";
				break;

			case MISSING:
				std::cout << "Missing";
				break;
			}

		//nice indentations
			std::cout << "\n\n";
}