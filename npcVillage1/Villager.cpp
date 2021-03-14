#include "Villager.h"
#include <fstream>
#include <iostream>
#include <string>


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

std::string Villager::ReturnParentF()
{
	std::string tempHolder;

	if (ParentF != NULL)
		tempHolder = std::to_string(ParentF->idNumber);
	else
		tempHolder = "Eternal";

	return tempHolder;
}

std::string Villager::ReturnParentM()
{
	std::string tempHolder;

	if (ParentM != NULL)
		tempHolder = std::to_string(ParentM->idNumber);
	else
		tempHolder = "Eternal";

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
	bool record = false;
	int randNum = 0;
	std::string tempQ, tempA;

	if (rand() % 5 < 1)
	{
		record = true;
		tempQ = "What happened to your ";
		tempA = "I scarred my ";
	}

	randNum = rand() % 5;

	activeVillagerX.deathRisk++;

	switch (randNum)
	{
	case 0:
		if (activeVillagerX.ArmL < 1)
		{
			activeVillagerX.ArmL = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their left arm\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "left arm?";
				tempA = "left arm when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 1:
		if (activeVillagerX.ArmR < 1)
		{
			activeVillagerX.ArmR = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their right arm\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "right arm?";
				tempA = "right arm when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 2:
		if (activeVillagerX.LegL < 1)
		{
			activeVillagerX.LegL = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their left leg\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "left leg?";
				tempA = "left leg when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 3:
		if (activeVillagerX.LegR < 1)
		{
			activeVillagerX.LegR = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their right leg\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "right leg?";
				tempA = "right leg when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 4:
		if (activeVillagerX.Torso < 1)
		{
			activeVillagerX.Torso = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their torso\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "torso?";
				tempA = "torso when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 5:
		if (activeVillagerX.Head < 1)
		{
			activeVillagerX.Head = SCARRED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " scarred their head\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "head?";
				tempA = "head when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;
	}
}

void Villager::BurnVillager(Villager &activeVillagerX)
{
	bool record = false;
	int randNum = 0;
	std::string tempQ, tempA;

	if (rand() % 5 < 1)
	{
		record = true;
		tempQ = "What happened to your ";
		tempA = "I burned my ";
	}

	randNum = rand() % 5;

	activeVillagerX.deathRisk++;

	switch (randNum)
	{
	case 0:
		if (activeVillagerX.ArmL < 2)
		{
			activeVillagerX.ArmL = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their left arm\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "left arm?";
				tempA = "left arm when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 1:
		if (activeVillagerX.ArmR < 2)
		{
			activeVillagerX.ArmR = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their right arm\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "right arm?";
				tempA = "right arm when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 2:
		if (activeVillagerX.LegL < 2)
		{
			activeVillagerX.LegL = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their left leg\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "left leg?";
				tempA = "left leg when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 3:
		if (activeVillagerX.LegR < 2)
		{
			activeVillagerX.LegR = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their right leg\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "right leg?";
				tempA = "right leg when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 4:
		if (activeVillagerX.Torso < 2)
		{
			activeVillagerX.Torso = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their torso\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "torso?";
				tempA = "torso when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 5:
		if (activeVillagerX.Head < 2)
		{
			activeVillagerX.Head = BURNED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " burned their head\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "head?";
				tempA = "head when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;
	}
}

void Villager::CrippleVillager(Villager &activeVillagerX)
{
	bool record = false;
	int randNum = 0;
	std::string tempQ, tempA;

	if (rand() % 5 < 1)
	{
		record = true;
		tempQ = "What happened to your ";
		tempA = "I crippled my ";
	}

	randNum = rand() % 5;

	activeVillagerX.deathRisk = activeVillagerX.deathRisk = 2;

	switch (randNum)
	{
	case 0:
		if (activeVillagerX.ArmL < 3)
		{
			activeVillagerX.ArmL = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their left arm\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "left arm?";
				tempA = "left arm when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 1:
		if (activeVillagerX.ArmR < 3)
		{
			activeVillagerX.ArmR = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their right arm\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "right arm?";
				tempA = "right arm when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 2:
		if (activeVillagerX.LegL < 3)
		{
			activeVillagerX.LegL = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their left leg\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "left leg?";
				tempA = "left leg when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 3:
		if (activeVillagerX.LegR < 3)
		{
			activeVillagerX.LegR = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their right leg\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "right leg?";
				tempA = "right leg when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 4:
		if (activeVillagerX.Torso < 3)
		{
			activeVillagerX.Torso = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their torso\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "torso?";
				tempA = "torso when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 5:
		if (activeVillagerX.Head < 3)
		{
			activeVillagerX.Head = CRIPPLED;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " crippled their head\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "head?";
				tempA = "head when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;
	}
}

void Villager::SeverVillager(Villager &activeVillagerX)
{
	bool record = false;
	int randNum = 0;
	std::string tempQ, tempA;

	if (rand() % 5 < 1)
	{
		record = true;
		tempQ = "What happened to your ";
		tempA = "I lost my ";
	}

	randNum = rand() % 5;

	activeVillagerX.deathRisk = activeVillagerX.deathRisk + 3;

	switch (randNum)
	{
	case 0:
		if (activeVillagerX.ArmL < 4)
		{
			activeVillagerX.ArmL = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their left arm\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "left arm?";
				tempA = "left arm when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 1:
		if (activeVillagerX.ArmR < 4)
		{
			activeVillagerX.ArmR = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their right arm\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "right arm?";
				tempA = "right arm when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 2:
		if (activeVillagerX.LegL < 4)
		{
			activeVillagerX.LegL = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their left leg\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "left leg?";
				tempA = "left leg when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 3:
		if (activeVillagerX.LegR < 4)
		{
			activeVillagerX.LegR = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their left leg\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "right leg?";
				tempA = "right leg when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 4:
		if (activeVillagerX.Torso < 4)
		{
			activeVillagerX.Torso = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their torso\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "torso?";
				tempA = "torso when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
		}
		break;

	case 5:
		if (activeVillagerX.Head < 4)
		{
			activeVillagerX.Head = MISSING;
			std::cout << activeVillagerX.Forename << " " << activeVillagerX.Surname << " lost their head\n";

			if (record)
			{
				addDialogue(tempQ, tempA);

				tempQ = "head?";
				tempA = "head when I was " + std::to_string(Age);

				editDialogue("", tempQ, "", tempA);
			}
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

void Villager::SeekPartner(Villager(&villagerArray1)[3000], int population1, Villager &activeVillager1)
{
	int mbSimilarity;

	for (int i = 0; i < population1; i++)
	{
		if (Partner == nullptr)
		{
			if ((Male != villagerArray1[i].Male) && (villagerArray1[i].Partner == nullptr))
			{
				if ((std::abs(Age - villagerArray1[i].Age) < 10) && villagerArray1[i].Age > 17)
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

						if (mbSimilarity > 2)
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

							if (rand() % 5 < 1)
							{
								std::string tempQ, tempA;

								tempQ = "How old were you when you married " + villagerArray1[i].Forename + "?";
								tempA = "I married " + villagerArray1[i].Forename + " when I was " + std::to_string(Age) + " and they were " + std::to_string(Partner->Age);

								addDialogue(tempQ, tempA);
							}
						}
					}
				}
			}
		}
	}
}

void Villager::SeekFriend(Villager(&villagerArray1)[3000], int population1, Villager &activeVillager1)
{
	int currentCandidate = 0;
	int emergencyExit = 0;
	int mbSimilarity = 0;

	while ((!villagerArray1[currentCandidate].Alive || villagerArray1[currentCandidate].FriendCount > 3) && emergencyExit < 100)
	{
		currentCandidate = rand() % population1;
		emergencyExit++;
	}

	if (villagerArray1[currentCandidate].Alive && (Age - villagerArray1[currentCandidate].Age < 10) || (villagerArray1[currentCandidate].Age - Age < 10) && villagerArray1[currentCandidate].FriendCount < 4)
	{
		mbSimilarity = 0;

		if (mbEI == villagerArray1[currentCandidate].mbEI)
		{
			mbSimilarity++;
		}

		if (mbSN == villagerArray1[currentCandidate].mbSN)
		{
			mbSimilarity++;
		}

		if (mbTF == villagerArray1[currentCandidate].mbTF)
		{
			mbSimilarity++;
		}

		if (mbJP == villagerArray1[currentCandidate].mbJP)
		{
			mbSimilarity++;
		}

		bool existingFriend = false;

		for (int j = 0; j < FriendCount; j++)
		{
			if (villagerArray1[currentCandidate].idNumber == Friends[j]->idNumber)
				existingFriend = true;
		}

		if (villagerArray1[currentCandidate].idNumber != idNumber && !existingFriend)
		{
			if (mbSimilarity > 1)
			{
				Friends[FriendCount] = &villagerArray1[currentCandidate];
				FriendCount++;
				villagerArray1[currentCandidate].Friends[villagerArray1[currentCandidate].FriendCount] = &activeVillager1;
				villagerArray1[currentCandidate].FriendCount++;

				std::cout << " " << Forename << " " << Surname << " befriended " << villagerArray1[currentCandidate].Forename << " " << villagerArray1[currentCandidate].Surname << "\n";

				if (rand() % 5 < 1)
				{
					std::string tempQ, tempA;

					tempQ = "How long have you been friends with " + villagerArray1[currentCandidate].Forename + "?";
					tempA = "I've been friends with " + villagerArray1[currentCandidate].Forename + " since I was " + std::to_string(Age);

					addDialogue(tempQ, tempA);
				}
			}
			else
			{
				std::cout << " " << Forename << " " << Surname << " found that they didn't work with " << villagerArray1[currentCandidate].Forename << " " << villagerArray1[currentCandidate].Surname << "\n";

				if (rand() % 5 < 1)
				{
					std::string tempQ, tempA;

					tempQ = "Do you get along well with " + villagerArray1[currentCandidate].Forename + "?";
					tempA = "I talked to " + villagerArray1[currentCandidate].Forename + " when I was " + std::to_string(Age) + " but we didn't work as friends";

					addDialogue(tempQ, tempA);
				}
			}
		}
	}
}

void Villager::HaveChild(Villager(&villagerArray)[3000], Villager &mother, Villager &father, std::string(foreNamesM)[241], int foreMLength, std::string(foreNamesF)[328], int foreFLength, std::string theTown, int& activeVillagersRef, int currentYear)
{
	bool birthSuccess = true;

	if ((rand() % 10) < 0)
	{
		if ((rand() % 5) < 0)
		{
			mother.Job = DEAD;
			mother.Alive = false;
			std::cout << mother.Forename << " " << mother.Surname << " died in childbirth. The baby also died.\n";
			birthSuccess = false;
		}
		else
		{
			mother.Job = DEAD;
			mother.Alive = false;
			std::cout << mother.Forename << " " << mother.Surname << " died in childbirth. The baby survived.\n";
		}
	}

	if(birthSuccess)
	{//Fiddly, will clean up for now and fix soon
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
		villagerArray[actiV].activeDialogue = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int k = 0; i < 2; i++)
			{
				villagerArray[actiV].dialogue[i][k] = "";
			}
		}
		villagerArray[actiV].dCount = 0;
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

		if (rand() % 5 < 1)
		{
			std::string tempStringQ;
			std::string tempStringA;
				
			tempStringQ = "When were you born?";
			tempStringA = "I was born in the year " + std::to_string(currentYear);

			std::cout << currentYear << std::endl;
			std::cout << tempStringQ << std::endl;
			std::cout << tempStringA << std::endl;

			villagerArray[actiV].addDialogue(tempStringQ, tempStringA);
			std::cout << villagerArray[actiV].dialogue[0][0] << std::endl << villagerArray[actiV].dialogue[0][1];
		}

		activeVillagersRef++;
	}
}

void Villager::GrowUp(Villager(villagerArray)[3000], int activeRef)
{
	int workingVillagers = 0;
	int foodVillagers = 0;

	for (int i = 1; i < activeRef; i++)
	{
		if (villagerArray[i].Job == FARMER)//track the number of food providers
		{
			foodVillagers++;
			workingVillagers++;
		}
		else if (villagerArray[i].Job != DEAD || villagerArray[i].Job != CHILD)
			workingVillagers++;		
	}
		
	//set their job, although Farming takes priority
	if (Male)
	{
		switch (rand() % 3)
		{
		case 0:
			Job = Villager::Role::HUNTER;//
			break;

		case 1:
			Job = Villager::Role::SMITH;//
			break;

		case 2:
			Job = Villager::Role::SOLDIER;//
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
		}
	}

	//https://www.mdpi.com/2079-9276/5/4/47/pdf
	//1 person can feed 5 in a year (non mechanised)

	if ((foodVillagers * 5) < workingVillagers)//therefore 1/5 of the population must produce food
	{
		Job = Villager::Role::FARMER;
	}

	activeDialogue = 0;

	std::string jobQ, jobA, roleText;

	switch (Job)
	{
	case Villager::Role::HUNTER:
		roleText = "n Hunter";
		break;

	case Villager::Role::FARMER:
		roleText = " Farmer";
		break;

	case Villager::Role::HOUSEWIFE:
		roleText = "n Housewife";
		break;

	case Villager::Role::SMITH:
		roleText = " Blacksmith";
		break;

	case Villager::Role::SOLDIER:
		roleText = " Soldier";
		break;

	case Villager::Role::WEAVER:
		roleText = " Weaver";
		break;
	}

	jobQ = "What did you do when you turned 16?";
	jobA = "I became a" + roleText + " once I became an adult.";

	addDialogue(jobQ, jobA);
}

void Villager::addDialogue(std::string Q, std::string A) //adds new Q's and A's, replacing old ones
{
	bool notDupe = true;

	for (int i = 0; i < 5; i++)
	{
		if (A == dialogue[i][1])
			notDupe = false;
	}

	if (notDupe)
	{
		dialogue[activeDialogue][0] = Q;
		dialogue[activeDialogue][1] = A;

		if (activeDialogue > 3)
		{
			activeDialogue = 0;
			dCount++;
		}

		else
			activeDialogue++;
	}
}

void Villager::editDialogue(std::string Qprefix, std::string Qsuffix, std::string Aprefix, std::string Asuffix) //DANGEROUS ><><>< Can edit the last edited dialogue
{
	std::string Qexisting;// = dialogue[activeDialogue][0];
	std::string Aexisting;// = dialogue[activeDialogue][1];

	if (activeDialogue == 0)
	{
		Qexisting = dialogue[4][0];
		Aexisting = dialogue[4][1];

		dialogue[4][0] = Qprefix + Qexisting + Qsuffix;
		dialogue[4][1] = Aprefix + Aexisting + Asuffix;
	}
	else
	{
		Qexisting = dialogue[activeDialogue - 1][0];
		Aexisting = dialogue[activeDialogue - 1][1];

		dialogue[activeDialogue - 1][0] = Qprefix + Qexisting + Qsuffix;
		dialogue[activeDialogue - 1][1] = Aprefix + Aexisting + Asuffix;
	}
}

//run each potential yearly activity for a villager, as well as incrementing yearly values
void Villager::SimulateYear(Villager(&villagerArray)[3000], int population, Villager &activeVillager, std::string(foreNamesM)[241], int foreMLength, std::string(foreNamesF)[328], int foreFLength, std::string(surnames)[2089], std::string theTown, int& activeVillagersRef, int currentYear)
{
	//The dead can be skipped
	if (Alive)
	{
		Age++;

		if ((Age > 15) && Job == CHILD)
		{
			GrowUp(villagerArray, activeVillagersRef);
			std::cout << Forename << " turned 16 and is now an adult\n";
		}
		PerformJob(activeVillager);

		if ((Partner == nullptr) && (Age > 17))
		{
			SeekPartner(villagerArray, population, activeVillager);
		}

		if (FriendCount < ((Age / 5) + 1) && FriendCount < (sizeof(Friends)/sizeof(Friends[0]) -1))
		{
			SeekFriend(villagerArray, population, activeVillager);
		}

		if (isPregnant)
		{
			HaveChild(villagerArray, *this, *Partner, foreNamesM, foreMLength, foreNamesF, foreFLength, theTown, activeVillagersRef, currentYear);
			isPregnant = false;
		}

		if (!Male && (Partner != nullptr) && !isPregnant && KidCount < (sizeof(Kid)/sizeof(Kid[0]) - 1) && (Partner->Job != DEAD) && Age < 51)
		{
			if ((rand() % 10) < 1)
				isPregnant = true;
		}

		NaturalCausesDeath(); //do this last to account for and deathRisk gained in the year
	}
}

//Fill in any empty dialogue
void Villager::fillDialogue(int &dialogueOption)
{
	while (dCount < 1)
	{
		std::string tempQ, tempA;

		switch (dialogueOption)
		{
		case(0):
			tempQ = "Who were your parents?";
			tempA = "My mother was " + ParentF->Forename + " and my father was " + ParentM->Forename;

			addDialogue(tempQ, tempA);
			dialogueOption++;
			break;

		case(1):
			tempQ = "How many friends do you have?";
			if (FriendCount > 2)
				tempA = "I have " + std::to_string(FriendCount) + " friends";
			else if (FriendCount == 1)
				tempA = "I only have the one friend, " + Friends[0]->Forename;
			else
				tempA = "I don't have any friends";

			addDialogue(tempQ, tempA);
			dialogueOption++;
			break;

		case(2):
			tempQ = "Do you have any siblings?";

			if (ParentF->KidCount > 2)
				tempA = "Yes. I actually have " + std::to_string((ParentF->KidCount - 1)) + " siblings";
			else if (ParentF->KidCount == 2)
				tempA = "Yes. but I only have one sibling";
			else
				tempA = "No. I'm an only child";

			addDialogue(tempQ, tempA);
			dialogueOption++;
			break;

		case(3):
			tempQ = "How old was your father when he died?";

			if (!ParentM->Alive)
				tempA = "My father was " + std::to_string(ParentM->Age) + " when he died";
			else
				tempA = "My father is actually still alive";
				
			addDialogue(tempQ, tempA);
			dialogueOption++;
			break;

		case(4):
			tempQ = "Who was your first friend?";

			if (Friends[0] == NULL)
				tempA = "I actually don't have any friends yet";
			else
				tempA = "My first friend was " + Friends[0]->Forename + " " + Friends[0]->Surname;

			addDialogue(tempQ, tempA);
			dialogueOption++;
			break;

		case(5):

			if (ParentF->KidCount > 1)
			{
				tempQ = "What is your eldest sibling's age?";

				if (ParentF->Kid[1]->idNumber == idNumber)
					tempA = "I'm the eldest sibling. The next eldest is " + ParentF->Kid[2]->Forename + " who was born " + std::to_string(std::abs(ParentF->Kid[2]->BirthYear - BirthYear)) + " years after me";
				else
					tempA = "My eldest sibling is " + ParentF->Kid[1]->Forename + " who was born " + std::to_string(ParentF->Kid[1]->Age) + " years old";
			}
			else
			{
				tempQ = "Do you have any injuries to your head?";

				if (Head == FINE)
					tempA = "I've never had any serious injuries to my head";
				else
					switch (Head)
					{
					case(SCARRED):
						tempA = "Yeah I managed to scar my head";
						break;

					case(BURNED):
						tempA = "Yeah I managed to burn my head";
						break;

					case(CRIPPLED):
						tempA = "Yeah I managed to cripple my head and died from my injuries";
						break;

					case(MISSING):
						tempA = "Yeah I managed to lose my head and died from my injuries";
						break;
					}
			}

			addDialogue(tempQ, tempA);
			dialogueOption++;
			break;

		case(6):
			tempQ = "How old was your mother when she died?";

			if (!ParentF->Alive)
				tempA = "My mother was " + std::to_string(ParentF->Age) + " when she died";
			else
				tempA = "My mother is actually still alive";

			addDialogue(tempQ, tempA);
			dialogueOption++;
			break;

		case(7):
			tempQ = "Do you have any children?";

			if (KidCount > 1)
				tempA = "I have " + std::to_string(KidCount) + " wonderful children!";
			else if (KidCount == 1)
				tempA = "I just have the one child";
			else if (KidCount == 0)
				tempA = "I don't have any children";

			if (Age < 18)
				tempA = "I'm a little young to be having children don't you think?";

			addDialogue(tempQ, tempA);
			dialogueOption++;
			break;

		case(8):
			if (ParentF->BirthYear > 0)
			{
				tempQ = "How old was your mother when she had you?";

				tempA = "My mother was " + std::to_string(BirthYear - ParentF->BirthYear) + " years old when she had me";
			}
			else
			{
				tempQ = "Would you say you're more of an introvert or an extrovert?";

				tempA = "I think I'm more of an ";
				if (mbEI)
					tempA = tempA + "extrovert";
				else
					tempA = tempA + "introvert";
			}
			addDialogue(tempQ, tempA);
			dialogueOption++;
			break;

		case(9):
			if (FriendCount > 0)
			{
				tempQ = "Do you have any shared friends with " + Friends[0]->Forename + " " + Friends[0]->Surname + "?";

				Villager *sharedFriend = nullptr;
				int sharedFnum = 0;

				for (int i = 0; i < FriendCount; i++)
				{
					for (int j = 0; j < Friends[0]->FriendCount; j++)
					{
						if (Friends[0]->Friends[j]->idNumber == Friends[i]->idNumber)
						{
							sharedFnum++;
							sharedFriend = Friends[i];
						}
					}
				}

				if (sharedFnum > 1)
					tempA = "Yes. We have " + std::to_string(sharedFnum) + " friends shared, including " + sharedFriend->Forename + " " + sharedFriend->Surname;
				else if (sharedFnum == 1)
					tempA = "Yes. We have 1 shared friend, " + sharedFriend->Forename + " " + sharedFriend->Surname;
				else
					tempA = "No. " + Friends[0]->Forename + " and I don't share any friends";
			}
			else
			{
				tempQ = "Would people say you were more logical or more empathetic?";

				tempA = "I think people would say I make decisions based on ";
				if (mbTF)
					tempA = tempA + "the facts at hand";
				else
					tempA = tempA + "how I feel about something";
			}

			addDialogue(tempQ, tempA);
			dialogueOption = 0;
			break;
		}
	}
}

int liveVillagers(Villager(&villagerArray)[3000], int population)
{
	int livingVillagers = 0;

	for (int i = 0; i < population; i++)
	{
		if (villagerArray[i].Alive)
			livingVillagers++;
	}

	return livingVillagers;
}

std::string Villager::returnMBType()
{
	std::string mbType;

	if (mbEI)
		mbType = "E";
	else
		mbType = "I";

	if (mbSN)
		mbType = mbType + "S";
	else
		mbType = mbType + "N";

	if (mbTF)
		mbType = mbType + "T";
	else
		mbType = mbType + "F";

	if (mbJP)
		mbType = mbType + "J";
	else
		mbType = mbType + "P";

	return mbType;
}

std::string Villager::returnRole()
{
	std::string output = "ERROR";

	switch (Job)
	{
	case(DEAD):
		output = "Dead";
		break;

	case(FARMER):
		output = "Farmer";
		break;

	case(SMITH):
		output = "Smith";
		break;

	case(HUNTER):
		output = "Hunter";
		break;

	case(HOUSEWIFE):
		output = "Housewife";
		break;

	case(WEAVER):
		output = "Weaver";
		break;

	case(SOLDIER):
		output = "Soldier";
		break;

	case(CHILD):
		output = "Child";
		break;
	}

	return output;
}

std::string Villager::returnMale()
{
	if (Male)
		return "Male";
	else
		return "Female";
}

std::string Villager::returnPartnerID()
{
	std::string returnValue;

	if (Partner != nullptr)
		returnValue = std::to_string(Partner->idNumber);
	else
		returnValue = "Single";

	return returnValue;
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
		if (ParentM != NULL)
		{
			std::cout << ReturnParent(ParentM) << "   ";
		}
		else 
		{
			std::cout << "Lost to time		";
		}

		std::cout << "Mother: ";
		if (ParentF != NULL)
		{
			//std::cout << subject.ParentF->Forename << " " << subject.ParentF->Surname;
			std::cout << ReturnParent(ParentF);
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
				if (Friends[i] != NULL)
					std::cout << "\n >" << Friends[i]->Forename;
				
			}
		}

	//times they've looped over dialogue
		std::cout << "\n D-Count: " << dCount;

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