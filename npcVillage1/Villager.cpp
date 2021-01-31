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

void Villager::ScarVillager(Villager &activeVillagerX)
{
	int randNum = 0;

	randNum = rand() % 5;

	activeVillagerX.deathRisk++;

	switch (randNum)
	{
	case 0:
		if (activeVillagerX.ArmL < 1)
		{
			activeVillagerX.ArmL = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their left arm\n";
		}
		break;

	case 1:
		if (activeVillagerX.ArmR < 1)
		{
			activeVillagerX.ArmR = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their right arm\n";
		}
		break;

	case 2:
		if (activeVillagerX.LegL < 1)
		{
			activeVillagerX.LegL = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their left leg\n";
		}
		break;

	case 3:
		if (activeVillagerX.LegR < 1)
		{
			activeVillagerX.LegR = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their right leg\n";
		}
		break;

	case 4:
		if (activeVillagerX.Torso < 1)
		{
			activeVillagerX.Torso = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their torso\n";
		}
		break;

	case 5:
		if (activeVillagerX.Head < 1)
		{
			activeVillagerX.Head = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their head\n";
		}
		break;
	}
}

void Villager::BurnVillager(Villager &activeVillagerX)
{
	int randNum = 0;

	randNum = rand() % 5;

	activeVillagerX.deathRisk++;

	switch (randNum)
	{
	case 0:
		if (activeVillagerX.ArmL < 2)
		{
			activeVillagerX.ArmL = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their left arm\n";
		}
		break;

	case 1:
		if (activeVillagerX.ArmR < 2)
		{
			activeVillagerX.ArmR = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their right arm\n";
		}
		break;

	case 2:
		if (activeVillagerX.LegL < 2)
		{
			activeVillagerX.LegL = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their left leg\n";
		}
		break;

	case 3:
		if (activeVillagerX.LegR < 2)
		{
			activeVillagerX.LegR = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their right leg\n";
		}
		break;

	case 4:
		if (activeVillagerX.Torso < 2)
		{
			activeVillagerX.Torso = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their torso\n";
		}
		break;

	case 5:
		if (activeVillagerX.Head < 2)
		{
			activeVillagerX.Head = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their head\n";
		}
		break;
	}
}

void Villager::CrippleVillager(Villager &activeVillagerX)
{
	int randNum = 0;

	randNum = rand() % 5;

	activeVillagerX.deathRisk = activeVillagerX.deathRisk = 2;

	switch (randNum)
	{
	case 0:
		if (activeVillagerX.ArmL < 3)
		{
			activeVillagerX.ArmL = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their left arm\n";
		}
		break;

	case 1:
		if (activeVillagerX.ArmR < 3)
		{
			activeVillagerX.ArmR = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their right arm\n";
		}
		break;

	case 2:
		if (activeVillagerX.LegL < 3)
		{
			activeVillagerX.LegL = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their left leg\n";
		}
		break;

	case 3:
		if (activeVillagerX.LegR < 3)
		{
			activeVillagerX.LegR = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their right leg\n";
		}
		break;

	case 4:
		if (activeVillagerX.Torso < 3)
		{
			activeVillagerX.Torso = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their torso\n";
		}
		break;

	case 5:
		if (activeVillagerX.Head < 3)
		{
			activeVillagerX.Head = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their head\n";
		}
		break;
	}
}

void Villager::SeverVillager(Villager &activeVillagerX)
{
	int randNum = 0;

	randNum = rand() % 5;

	activeVillagerX.deathRisk = activeVillagerX.deathRisk + 3;

	switch (randNum)
	{
	case 0:
		if (activeVillagerX.ArmL < 4)
		{
			activeVillagerX.ArmL = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their left arm\n";
		}
		break;

	case 1:
		if (activeVillagerX.ArmR < 4)
		{
			activeVillagerX.ArmR = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their right arm\n";
		}
		break;

	case 2:
		if (activeVillagerX.LegL < 4)
		{
			activeVillagerX.LegL = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their left leg\n";
		}
		break;

	case 3:
		if (activeVillagerX.LegR < 4)
		{
			activeVillagerX.LegR = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their left leg\n";
		}
		break;

	case 4:
		if (activeVillagerX.Torso < 4)
		{
			activeVillagerX.Torso = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their torso\n";
		}
		break;

	case 5:
		if (activeVillagerX.Head < 4)
		{
			activeVillagerX.Head = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their head\n";
		}
		break;
	}
}

void Villager::NaturalCausesDeath()
{
	

	if ((rand() % 100 + 70) < (Age + (deathRisk / 2)))
	{
		Alive = false;
		std::cout << Forename << " " << Surname << " has died of natural causes at the age of " << Age << "\n";
	}
}

void Villager::PerformJob(Villager &activeVillager2)
{
	int jobRisk = 0;

	int riskFactor = 5;

	jobRisk = rand() % 100 + 10 - deathRisk;

	switch (Job)
	{
	case DEAD:
		std::cout << Forename << " is dead and shouldn't output this\n";
		break;

	case FARMER:
		//Values Set
		if (mbEI) { jobRisk = (jobRisk + riskFactor); }

		if (mbSN) { jobRisk = (jobRisk - riskFactor); }

		if (mbTF) { jobRisk = (jobRisk - riskFactor); }

		if (mbJP) { jobRisk = (jobRisk - riskFactor); }

		if (jobRisk < 25)
		{
			std::cout << Forename << " " << Surname << " was injured while working as a farmer.\n";
			
			if (jobRisk < 25 && jobRisk > 16) //SCARRED
			{
				ScarVillager(activeVillager2);
			}

			if (jobRisk < 15 && jobRisk > 9) //BURNED
			{
				BurnVillager(activeVillager2);
			}

			if (jobRisk < 10 && jobRisk > 5) //CRIPPLED
			{
				CrippleVillager(activeVillager2);
				if (activeVillager2.Head == CRIPPLED)
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}

			if (jobRisk < 6) //MISSING
			{
				SeverVillager(activeVillager2);
				if ((activeVillager2.Head == MISSING) || (activeVillager2.Torso == MISSING))
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}
		}

		break;

	case SMITH:
		//Looks good?
		if (mbEI) { jobRisk = (jobRisk - riskFactor); }

		if (mbSN) { jobRisk = (jobRisk - riskFactor); }

		if (mbTF) { jobRisk = (jobRisk - riskFactor); }

		if (mbJP) { jobRisk = (jobRisk + riskFactor); }

		if (jobRisk < 30)
		{
			std::cout << Forename << " " << Surname << " was injured while working as a smith.\n";

			if (jobRisk < 30 && jobRisk > 19) //SCARRED
			{
				ScarVillager(activeVillager2);
			}

			if (jobRisk < 20 && jobRisk > 9) //BURNED
			{
				BurnVillager(activeVillager2);
			}

			if (jobRisk < 10 && jobRisk > 5) //CRIPPLED
			{
				CrippleVillager(activeVillager2);
				if (activeVillager2.Head == CRIPPLED)
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}

			if (jobRisk < 6) //MISSING
			{
				SeverVillager(activeVillager2);
				if ((activeVillager2.Head == MISSING) || (activeVillager2.Torso == MISSING))
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}
		}
		break;

	case HUNTER:
		//looks good
		if (mbEI) { jobRisk = (jobRisk - riskFactor); }

		if (mbSN) { jobRisk = (jobRisk + riskFactor); }

		if (!mbTF) { jobRisk = (jobRisk + riskFactor); }

		if (!mbJP) { jobRisk = (jobRisk + riskFactor); }

		if (jobRisk < 30)
		{
			std::cout << Forename << " " << Surname << " was injured while working as a hunter.\n";

			if (jobRisk < 30 && jobRisk > 19) //SCARRED
			{
				ScarVillager(activeVillager2);
			}

			if (jobRisk < 20 && jobRisk > 9) //BURNED
			{
				BurnVillager(activeVillager2);
			}

			if (jobRisk < 10 && jobRisk > 5) //CRIPPLED
			{
				CrippleVillager(activeVillager2);
				if (activeVillager2.Head == CRIPPLED)
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}

			if (jobRisk < 6) //MISSING
			{
				SeverVillager(activeVillager2);
				if ((activeVillager2.Head == MISSING) || (activeVillager2.Torso == MISSING))
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}
		}
		break;

	case HOUSEWIFE:
		//looks good
		if (!mbEI) { jobRisk = (jobRisk + riskFactor); }

		if (!mbSN) { jobRisk = (jobRisk + riskFactor); }

		if (!mbTF) { jobRisk = (jobRisk + riskFactor); }

		if (mbJP) { jobRisk = (jobRisk + riskFactor); }

		if (jobRisk < 20)
		{
			std::cout << Forename << " " << Surname << " was injured while working as a housewife.\n";

			if (jobRisk < 20 && jobRisk > 9) //SCARRED
			{
				ScarVillager(activeVillager2);
			}

			if (jobRisk < 10 && jobRisk > 6) //BURNED
			{
				BurnVillager(activeVillager2);
			}

			if (jobRisk < 5) //CRIPPLED
			{
				CrippleVillager(activeVillager2);
				if (activeVillager2.Head == CRIPPLED)
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}
		}
		break;

	case WEAVER:
		//looks good?
		if (mbEI) { jobRisk = (jobRisk + riskFactor); }

		if (!mbSN) { jobRisk = (jobRisk + riskFactor); }

		if (mbTF) { jobRisk = (jobRisk - riskFactor); }

		if (mbJP) { jobRisk = (jobRisk - riskFactor); }

		if (jobRisk < 20)
		{
			std::cout << Forename << " " << Surname << " was injured while working as a weaver.\n";

			if (jobRisk < 20 && jobRisk > 9) //SCARRED
			{
				ScarVillager(activeVillager2);
			}

			if (jobRisk < 10 && jobRisk > 6) //BURNED
			{
				BurnVillager(activeVillager2);
			}

			if (jobRisk < 5) //CRIPPLED
			{
				CrippleVillager(activeVillager2);
				if (activeVillager2.Head == CRIPPLED)
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}

		}
		break;

	case SOLDIER:
		//looks good?
		if (mbEI) { jobRisk = (jobRisk + riskFactor); }

		if (!mbSN) { jobRisk = (jobRisk + riskFactor); }

		if (!mbTF) { jobRisk = (jobRisk + riskFactor); }

		if (mbJP) { jobRisk = (jobRisk + riskFactor); }

		if (jobRisk < 40)
		{
			std::cout << Forename << " " << Surname << " was injured while working as a soldier.\n";

			if (jobRisk < 40 && jobRisk > 26) //SCARRED
			{
				ScarVillager(activeVillager2);
			}

			if (jobRisk < 25 && jobRisk > 16) //BURNED
			{
				BurnVillager(activeVillager2);
			}

			if (jobRisk < 15 && jobRisk > 7) //CRIPPLED
			{
				CrippleVillager(activeVillager2);
				if (activeVillager2.Head == CRIPPLED)
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}

			if (jobRisk < 8) //MISSING
			{
				std::cout << Forename << " lost their ";
				SeverVillager(activeVillager2);
				if ((activeVillager2.Head == MISSING) || (activeVillager2.Torso == MISSING))
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}
		}
		break;

	case CHILD:
		//Values good?
		if (mbEI) { jobRisk = (jobRisk + riskFactor); }

		if (mbSN) { jobRisk = (jobRisk - riskFactor); }

		if (mbTF) { jobRisk = (jobRisk + riskFactor); }

		if (mbJP) { jobRisk = (jobRisk - riskFactor); }

		if (jobRisk < 15)
		{
			std::cout << Forename << " " << Surname << " was injured while playing.\n";

			if (jobRisk < 15 && jobRisk > 9) //SCARRED
			{
				ScarVillager(activeVillager2);
			}

			if (jobRisk < 10 && jobRisk > 5) //BURNED
			{
				BurnVillager(activeVillager2);
			}

			if (jobRisk < 6) //CRIPPLED
			{
				CrippleVillager(activeVillager2);
				if (activeVillager2.Head == CRIPPLED)
				{
					std::cout << Forename << " " << Surname << " died from their injuries\n";
					activeVillager2.Alive = false;
				}
			}
		}
		break;
	}
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

void Villager::HaveChild(Villager(&villagerArray)[300], Villager &mother, Villager &father, std::string(&foreNamesM)[241], int foreMLength, std::string(&foreNamesF)[328], int foreFLength, std::string theTown, int& activeVillagersRef, int currentYear)
{
	//Fiddly, will clean up for now and fix soon
	int actiV = activeVillagersRef;

	villagerArray[actiV].idNumber = actiV;
	if (rand() % 2 == 0)
	{
		villagerArray[actiV].Male = false;
	}
	else
	{
		villagerArray[actiV].Male = true;
	}
	villagerArray[actiV].BirthYear = currentYear;
	villagerArray[actiV].Age = 0;
	villagerArray[actiV].Alive = true;
	villagerArray[actiV].isPregnant = false;
	if (villagerArray[actiV].Male)
	{
		if ((rand() % 15) < 1 && father.ParentM->Forename != "Fimbultyr")
		{
			villagerArray[actiV].Forename = father.ParentM->Forename;
		}
		else
		villagerArray[actiV].Forename = foreNamesM[(rand() % foreMLength)];
	}
	else
	{
		if ((rand() % 15) < 1 && mother.ParentF->Forename != "Fimbultyr")
		{
			villagerArray[actiV].Forename = mother.ParentF->Forename;
		}
		else
		villagerArray[actiV].Forename = foreNamesF[(rand() % foreFLength)];
	}
	villagerArray[actiV].Surname = father.Surname;//
	villagerArray[actiV].FriendCount = 0;
	for (int i = 0; i <= 4; i++)
	{
		villagerArray[actiV].Kid[i] = NULL;
	}
	villagerArray[actiV].KidCount = 0;
	villagerArray[actiV].Location = theTown;
	villagerArray[actiV].SetParentF(&mother);
	villagerArray[actiV].SetParentM(&father);
	for (int i = 0; i <= 4; i++)
	{
		villagerArray[actiV].Friends[i] = NULL;
	}
	villagerArray[actiV].Partner = NULL;

	//Kids inherit their parent's shared traits
	if (mother.mbEI && father.mbEI)
	{
		villagerArray[actiV].mbEI = true;//
	}
	else if (!mother.mbEI && !father.mbEI)
	{
		villagerArray[actiV].mbEI = false;//
	}
	else
	{
		villagerArray[actiV].mbEI = (rand() % 2 == 0);
	}

	if (mother.mbSN && father.mbSN)
	{
		villagerArray[actiV].mbSN = true;//
	}
	else if (!mother.mbSN && !father.mbSN)
	{
		villagerArray[actiV].mbSN = false;//
	}
	else
	{
		villagerArray[actiV].mbSN = (rand() % 2 == 0);
	}

	if (mother.mbTF && father.mbTF)
	{
		villagerArray[actiV].mbTF = true;//
	}
	else if (!mother.mbTF && !father.mbTF)
	{
		villagerArray[actiV].mbTF = false;//
	}
	else
	{
		villagerArray[actiV].mbTF = (rand() % 2 == 0);
	}

	if (mother.mbJP && father.mbJP)
	{
		villagerArray[actiV].mbJP = true;//
	}
	else if (!mother.mbJP && !father.mbJP)
	{
		villagerArray[actiV].mbJP = false;//
	}
	else
	{
		villagerArray[actiV].mbJP = (rand() % 2 == 0);
	}


	villagerArray[actiV].Head = Villager::Wound::FINE;
	villagerArray[actiV].Torso = Villager::Wound::FINE;
	villagerArray[actiV].ArmL = Villager::Wound::FINE;
	villagerArray[actiV].ArmR = Villager::Wound::FINE;
	villagerArray[actiV].LegL = Villager::Wound::FINE;
	villagerArray[actiV].LegR = Villager::Wound::FINE;

	villagerArray[actiV].Job = Villager::Role::CHILD;//

	villagerArray[actiV].deathRisk = 0;

	std::cout << father.Forename << " and " << mother.Forename << " " << father.Surname << " have given birth to a baby ";
	if (villagerArray[actiV].Male)
	{
		std::cout << "boy named " << villagerArray[actiV].Forename << std::endl;
	}
	else
	{
		std::cout << "girl named " << villagerArray[actiV].Forename << std::endl;
	}

	father.KidCount++;
	mother.KidCount++;

	father.Kid[father.KidCount] = &villagerArray[actiV];
	mother.Kid[mother.KidCount] = &villagerArray[actiV];

	activeVillagersRef++;
}

void Villager::GrowUp()
{
	if (Male)
	{
		switch (rand() % 3)
		{
		case 0:
			Job = Villager::Role::FARMER;//
			break;

		case 1:
			Job = Villager::Role::SMITH;//
			break;

		case 2:
			Job = Villager::Role::SOLDIER;//
			break;

		case 3:
			Job = Villager::Role::HUNTER;//
			break;
		}
	}
	else
	{
		switch (rand() % 2)
		{
		case 0:
			Job = Villager::Role::WEAVER;//
			break;

		case 1:
			Job = Villager::Role::HOUSEWIFE;//
			break;

		case 2:
			Job = Villager::Role::FARMER;//
			break;
		}
	}
}

//run each potential yearly activity for a villager, as well as incrementing yearly values
void Villager::SimulateYear(Villager(&villagerArray)[300], int population, Villager &activeVillager, std::string(&foreNamesM)[241], int foreMLength, std::string(&foreNamesF)[328], int foreFLength, std::string(&surnames)[2089], std::string theTown, int& activeVillagersRef, int currentYear)
{
	//The dead can be skipped
	if (Alive)
	{
		Age++;

		if ((Age > 15) && Job == CHILD)
		{
			GrowUp();
			std::cout << Forename << " turned 16 and is now an adult\n";
		}
		PerformJob(activeVillager);

		if ((Partner == nullptr) && (Age > 17))
		{
			SeekPartner(villagerArray, population, activeVillager);
		}

		if (isPregnant)
		{
			HaveChild(villagerArray, *this, *Partner, foreNamesM, foreMLength, foreNamesF, foreFLength, theTown, activeVillagersRef, currentYear);
			isPregnant = false;
		}

		if (!Male && (Partner != nullptr) && !isPregnant && KidCount < (sizeof(Kid)/sizeof(Kid[0]) - 1) && (Partner->Job != DEAD))
		{
			if ((rand() % 10) < 1)
				isPregnant = true;
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
			for (int i = 1; (i <= KidCount); i++)
			{
				if(Kid[i] != NULL)
					std::cout << "\n >" << Kid[i]->Forename;
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