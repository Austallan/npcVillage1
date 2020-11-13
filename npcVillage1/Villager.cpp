#include "Villager.h"
#include <iostream>

//FUNCTIONS DOWN HERE												FUNCTIONS DOWN HERE
//VVVVVVVVVVVVVVVVVVV												VVVVVVVVVVVVVVVVVVV

void Villager::OutputData(Villager subject)
{
	//Foraname and Surname
	std::cout << "\n Full Name: " << subject.Forename << " " << subject.Surname;
	
	//Age, gender and Alive status
	std::cout << "\n Age: " << subject.Age << "		Gender: ";
	if (subject.Male)
	{
		std::cout << "Male";
	}
	else
	{
		std::cout << "Female";
	}

	std::cout << "		Status: ";
	
	if (subject.Alive)
	{
		std::cout << "Alive";
	}
	else
	{
		std::cout << "Deceased";
	} 

	//Parents
	std::cout << "\n Father: ";
		if (subject.ParentM == NULL)
		{
			std::cout << "Lost to time		";
		}
		else 
		{
			std::cout << subject.ParentM->Forename << " " << subject.ParentM->Surname << "		";
		}

		std::cout << "Mother: ";
		if (subject.ParentM == NULL)
		{
			std::cout << "Lost to time";
		}
		else
		{
			std::cout << subject.ParentF->Forename << " " << subject.ParentF->Surname;
		}

	//Current location
		std::cout << "\n Current Residence: " << subject.Location;

	//Partner status and/or name
		std::cout << "\n Current Partner: ";
		if (subject.Partner == NULL)
		{
			std::cout << "No Partner";
		}
		else
		{
			std::cout << subject.Partner->Forename << " " << subject.Partner->Surname;
		}

	//Number of kids, list any kids
		std::cout << "\n Number of Children: " << subject.KidCount;
		if (subject.KidCount > 0)
		{
			//loop for number of kids to display their names
		}

	//Number of friends, list any friends
		std::cout << "\n Number of Friends: " << subject.FriendCount;
		if (subject.FriendCount > 0)
		{
			//loop for number of friends to display their names
		}

	//Myers-Briggs type
		std::cout << "\n Myers-Briggs Type: ";
			if (subject.mbEI)
			{
				std::cout << "E";
			}
			else
			{
				std::cout << "I";
			}

			if (subject.mbSN)
			{
				std::cout << "S";
			}
			else
			{
				std::cout << "N";
			}

			if (subject.mbTF)
			{
				std::cout << "T";
			}
			else
			{
				std::cout << "F";
			}

			if (subject.mbJP)
			{
				std::cout << "J";
			}
			else
			{
				std::cout << "P";
			}

	//Profession
			std::cout << "\n Profession: ";

			if (subject.Profession.DEAD)
			{
				std::cout << "Dead";
			}
			else if (subject.Profession.FARMER)
			{
				std::cout << "Farmer";
			}
			else if (subject.Profession.SMITH)
			{
				std::cout << "Blacksmith";
			}
			else if (subject.Profession.HUNTER)
			{
				std::cout << "Hunter";
			}
			else if (subject.Profession.HOUSEWIFE)
			{
				std::cout << "Housewife";
			}
			else if (subject.Profession.WEAVER)
			{
				std::cout << "Weaver";
			}
			else if (subject.Profession.SOLDIER)
			{
				std::cout << "Soldier";
			}
			else
			{
				std::cout << "Dead";
			}

	//Injuries
			std::cout << "\n Head Status: ";
}