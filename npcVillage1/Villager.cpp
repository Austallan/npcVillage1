#include "Villager.h"
#include <iostream>


//FUNCTIONS DOWN HERE												FUNCTIONS DOWN HERE
//VVVVVVVVVVVVVVVVVVV												VVVVVVVVVVVVVVVVVVV

void Villager::OutputData(Villager subject)
{
	//Villager ID number
	std::cout << "\n Villager ID: " << subject.idNumber;

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
			for (int i = 0; i < subject.KidCount; i++)
			{
				std::cout << "\n" << subject.Kid;
			}
		}

	//Number of friends, list any friends
		std::cout << "\n Number of Friends: " << subject.FriendCount;
		if (subject.FriendCount > 0)
		{
			//loop for number of friends to display their names
			for (int i = 0; i < subject.FriendCount; i++)
			{
				std::cout << "\n" << subject.Friends;
			}
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

			switch (subject.Job)
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
			}

	//Injuries
			//Head
			std::cout << "\n Head Status: ";

			switch (subject.Head)
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

			switch (subject.Torso)
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

			switch (subject.ArmR)
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

			switch (subject.ArmL)
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

			switch (subject.LegR)
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

			switch (subject.LegL)
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