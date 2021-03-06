// npcVillage1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Villager.h"
#include "OtherTown.h"
#include <fstream>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//Villager array variables
Villager villager[3000];
int ActiveVillagers = 0;

//Name array variables
string MaleNamesArray[241];//240
int MaleNameCount = 0;

string FemaleNamesArray[328];//327
int FemaleNameCount = 0;

string SurnamesArray[2089];//2088
int SurnamesCount = 0;

void feasabilityDemoPeople()
{
    //Baby steps, let's create the base villager to act as "Parents" to the first generation
   //can put this away as a function later and put him as Villager 0
    villager[0].idNumber = 0;
    villager[0].BirthYear = -99;
    villager[0].Age = 99;
    villager[0].Alive = false;
    villager[0].Forename = "Fimbultyr";
    villager[0].Surname = "Allfather";
    villager[0].FriendCount = 0;
    villager[0].Male = true;
    for (int i = 0; i <= 4; i++)
    {
        villager[0].Kid[i] = NULL;
    }
    villager[0].KidCount = 0;
    villager[0].Location = "Valhalla";
    villager[0].ParentF = NULL;
    villager[0].ParentM = NULL;
    for (int i = 0; i <= 4; i++)
    {
        villager[0].Friends[i] = NULL;
    }
    villager[0].Partner = NULL;
    villager[0].mbEI = true;
    villager[0].mbSN = true;
    villager[0].mbTF = true;
    villager[0].mbJP = true;
    villager[0].Head = Villager::Wound::MISSING;
    villager[0].Torso = Villager::Wound::CRIPPLED;
    villager[0].ArmL = Villager::Wound::BURNED;
    villager[0].ArmR = Villager::Wound::FINE;
    villager[0].LegL = Villager::Wound::SCARRED;
    villager[0].LegR = Villager::Wound::MISSING;
    villager[0].Job = Villager::Role::DEAD;
	villager[0].deathRisk = 0;

    ActiveVillagers++;


    //Arthur Denby, INFP Man
    villager[1].idNumber = 1;
    villager[1].BirthYear = -20;
    villager[1].Age = 20;
    villager[1].Alive = true;
    villager[1].Forename = "Arthur";
    villager[1].Surname = "Denby";
    villager[1].FriendCount = 0;
    villager[1].Male = true;
    for (int i = 0; i <= 4; i++)
    {
        villager[1].Kid[i] = NULL;
    }
    villager[1].KidCount = 0;
    villager[1].Location = "Deesden";
    villager[1].SetParentF(&villager[0]);
    villager[1].SetParentM(&villager[0]);
    for (int i = 0; i <= 4; i++)
    {
        villager[1].Friends[i] = NULL;
    }
    villager[1].Partner = NULL;
    villager[1].mbEI = false;
    villager[1].mbSN = false;
    villager[1].mbTF = false;
    villager[1].mbJP = false;
    villager[1].Head = Villager::Wound::FINE;
    villager[1].Torso = Villager::Wound::FINE;
    villager[1].ArmL = Villager::Wound::FINE;
    villager[1].ArmR = Villager::Wound::FINE;
    villager[1].LegL = Villager::Wound::FINE;
    villager[1].LegR = Villager::Wound::FINE;
    villager[1].Job = Villager::Role::FARMER;
	villager[1].deathRisk = 0;

    ActiveVillagers++;


    //Janet Stein, INTJ Woman
    villager[2].idNumber = 2;
    villager[2].BirthYear = -20;
    villager[2].Age = 20;
    villager[2].Alive = true;
    villager[2].Forename = "Janet";
    villager[2].Surname = "Stein";
    villager[2].FriendCount = 0;
    villager[2].Male = false;
    for (int i = 0; i <= 4; i++)
    {
        villager[2].Kid[i] = NULL;
    }
    villager[2].KidCount = 0;
    villager[2].Location = "Deesden";
    villager[2].SetParentF(&villager[0]);
    villager[2].SetParentM(&villager[0]);
    for (int i = 0; i <= 4; i++)
    {
        villager[2].Friends[i] = NULL;
    }
    villager[2].Partner = NULL;
    villager[2].mbEI = false;
    villager[2].mbSN = false;
    villager[2].mbTF = true;
    villager[2].mbJP = true;
    villager[2].Head = Villager::Wound::FINE;
    villager[2].Torso = Villager::Wound::FINE;
    villager[2].ArmL = Villager::Wound::FINE;
    villager[2].ArmR = Villager::Wound::FINE;
    villager[2].LegL = Villager::Wound::FINE;
    villager[2].LegR = Villager::Wound::FINE;
    villager[2].Job = Villager::Role::SMITH;
	villager[2].deathRisk = 0;

    ActiveVillagers++;


    //Jake Sullivan, ESFP Man
    villager[3].idNumber = 3;
    villager[3].BirthYear = -20;
    villager[3].Age = 20;
    villager[3].Alive = true;
    villager[3].Forename = "Jake";
    villager[3].Surname = "Sullivan";
    villager[3].FriendCount = 0;
    villager[3].Male = true;
    for (int i = 0; i <= 4; i++)
    {
        villager[3].Kid[i] = NULL;
    }
    villager[3].KidCount = 0;
    villager[3].Location = "Deesden";
    villager[3].SetParentF(&villager[0]);
    villager[3].SetParentM(&villager[0]);
    for (int i = 0; i <= 4; i++)
    {
        villager[3].Friends[i] = NULL;
    }
    villager[3].Partner = NULL;
    villager[3].mbEI = true;
    villager[3].mbSN = true;
    villager[3].mbTF = false;
    villager[3].mbJP = false;
    villager[3].Head = Villager::Wound::FINE;
    villager[3].Torso = Villager::Wound::FINE;
    villager[3].ArmL = Villager::Wound::FINE;
    villager[3].ArmR = Villager::Wound::FINE;
    villager[3].LegL = Villager::Wound::FINE;
    villager[3].LegR = Villager::Wound::FINE;
    villager[3].Job = Villager::Role::SOLDIER;
	villager[3].deathRisk = 0;

    ActiveVillagers++;


    //Kathryn Janeway, INFP Woman
    villager[4].idNumber = 4;
    villager[4].BirthYear = -20;
    villager[4].Age = 20;
    villager[4].Alive = true;
    villager[4].Forename = "Kathryn";
    villager[4].Surname = "Janeway";
    villager[4].FriendCount = 0;
    villager[4].Male = false;
    for (int i = 0; i <= 4; i++)
    {
        villager[4].Kid[i] = NULL;
    }
    villager[4].KidCount = 0;
    villager[4].Location = "Deesden";
    villager[4].SetParentF(&villager[0]);
    villager[4].SetParentM(&villager[0]);
    for (int i = 0; i <= 4; i++)
    {
        villager[4].Friends[i] = NULL;
    }
    villager[4].Partner = NULL;
    villager[4].mbEI = false;
    villager[4].mbSN = false;
    villager[4].mbTF = false;
    villager[4].mbJP = false;
    villager[4].Head = Villager::Wound::FINE;
    villager[4].Torso = Villager::Wound::FINE;
    villager[4].ArmL = Villager::Wound::FINE;
    villager[4].ArmR = Villager::Wound::FINE;
    villager[4].LegL = Villager::Wound::FINE;
    villager[4].LegR = Villager::Wound::FINE;
    villager[4].Job = Villager::Role::FARMER;
	villager[4].deathRisk = 0;

    ActiveVillagers++;


    //Sam Beckett, INTJ Man
    villager[5].idNumber = 5;
    villager[5].BirthYear = -20;
    villager[5].Age = 20;
    villager[5].Alive = true;
    villager[5].Forename = "Samuel";
    villager[5].Surname = "Beckett";
    villager[5].FriendCount = 0;
    villager[5].Male = true;
    for (int i = 0; i <= 4; i++)
    {
        villager[5].Kid[i] = NULL;
    }
    villager[5].KidCount = 0;
    villager[5].Location = "Deesden";
    villager[5].SetParentF(&villager[0]);
    villager[5].SetParentM(&villager[0]);
    for (int i = 0; i <= 4; i++)
    {
        villager[5].Friends[i] = NULL;
    }
    villager[5].Partner = NULL;
    villager[5].mbEI = true;
    villager[5].mbSN = true;
    villager[5].mbTF = false;
    villager[5].mbJP = false;
    villager[5].Head = Villager::Wound::FINE;
    villager[5].Torso = Villager::Wound::FINE;
    villager[5].ArmL = Villager::Wound::FINE;
    villager[5].ArmR = Villager::Wound::FINE;
    villager[5].LegL = Villager::Wound::FINE;
    villager[5].LegR = Villager::Wound::FINE;
    villager[5].Job = Villager::Role::SMITH;
	villager[5].deathRisk = 0;

    ActiveVillagers++;


    //Alice Parker, ESFP Woman
    villager[6].idNumber = 6;
    villager[6].BirthYear = -20;
    villager[6].Age = 20;
    villager[6].Alive = true;
    villager[6].Forename = "Alice";
    villager[6].Surname = "Parker";
    villager[6].FriendCount = 0;
    villager[6].Male = false;
    for (int i = 0; i <= 4; i++)
    {
        villager[6].Kid[i] = NULL;
    }
    villager[6].KidCount = 0;
    villager[6].Location = "Deesden";
    villager[6].SetParentF(&villager[0]);
    villager[6].SetParentM(&villager[0]);
    for (int i = 0; i <= 4; i++)
    {
        villager[6].Friends[i] = NULL;
    }
    villager[6].Partner = NULL;
    villager[6].mbEI = false;
    villager[6].mbSN = false;
    villager[6].mbTF = true;
    villager[6].mbJP = true;
    villager[6].Head = Villager::Wound::FINE;
    villager[6].Torso = Villager::Wound::FINE;
    villager[6].ArmL = Villager::Wound::FINE;
    villager[6].ArmR = Villager::Wound::FINE;
    villager[6].LegL = Villager::Wound::FINE;
    villager[6].LegR = Villager::Wound::FINE;
    villager[6].Job = Villager::Role::WEAVER;
	villager[6].deathRisk = 0;

    ActiveVillagers++;


    //Clive Mangrove, ISTP Man
    villager[7].idNumber = 7;
    villager[7].BirthYear = -20;
    villager[7].Age = 20;
    villager[7].Alive = true;
    villager[7].Forename = "Clive";
    villager[7].Surname = "Mangrove";
    villager[7].FriendCount = 0;
    villager[7].Male = true;
    for (int i = 0; i <= 4; i++)
    {
        villager[7].Kid[i] = NULL;
    }
    villager[7].KidCount = 0;
    villager[7].Location = "Deesden";
    villager[7].SetParentF(&villager[0]);
    villager[7].SetParentM(&villager[0]);
    for (int i = 0; i <= 4; i++)
    {
        villager[7].Friends[i] = NULL;
    }
    villager[7].Partner = NULL;
    villager[7].mbEI = false;
    villager[7].mbSN = true;
    villager[7].mbTF = true;
    villager[7].mbJP = false;
    villager[7].Head = Villager::Wound::FINE;
    villager[7].Torso = Villager::Wound::FINE;
    villager[7].ArmL = Villager::Wound::FINE;
    villager[7].ArmR = Villager::Wound::FINE;
    villager[7].LegL = Villager::Wound::FINE;
    villager[7].LegR = Villager::Wound::FINE;
    villager[7].Job = Villager::Role::HUNTER;
	villager[7].deathRisk = 0;

    ActiveVillagers++;


    //Melanie Marthorpe, ISFJ Woman
    villager[8].idNumber = 8;
    villager[8].BirthYear = -20;
    villager[8].Age = 20;
    villager[8].Alive = true;
    villager[8].Forename = "Melanie";
    villager[8].Surname = "Marthorpe";
    villager[8].FriendCount = 0;
    villager[8].Male = false;
    for (int i = 0; i <= 4; i++)
    {
        villager[8].Kid[i] = NULL;
    }
    villager[8].KidCount = 0;
    villager[8].Location = "Deesden";
    villager[8].SetParentF(&villager[0]);
    villager[8].SetParentM(&villager[0]);
    for (int i = 0; i <= 4; i++)
    {
        villager[8].Friends[i] = NULL;
    }
    villager[8].Partner = NULL;
    villager[8].mbEI = false;
    villager[8].mbSN = true;
    villager[8].mbTF = false;
    villager[8].mbJP = true;
    villager[8].Head = Villager::Wound::FINE;
    villager[8].Torso = Villager::Wound::FINE;
    villager[8].ArmL = Villager::Wound::FINE;
    villager[8].ArmR = Villager::Wound::FINE;
    villager[8].LegL = Villager::Wound::FINE;
    villager[8].LegR = Villager::Wound::FINE;
    villager[8].Job = Villager::Role::WEAVER;
	villager[8].deathRisk = 0;

    ActiveVillagers++;


    //Dennis Blackburn, ENTP Man
    villager[9].idNumber = 9;
    villager[9].BirthYear = -20;
    villager[9].Age = 20;
    villager[9].Alive = true;
    villager[9].Forename = "Dennis";
    villager[9].Surname = "Blackburn";
    villager[9].FriendCount = 0;
    villager[9].Male = true;
    for (int i = 0; i <= 4; i++)
    {
        villager[9].Kid[i] = NULL;
    }
    villager[9].KidCount = 0;
    villager[9].Location = "Deesden";
    villager[9].SetParentF(&villager[0]);
    villager[9].SetParentM(&villager[0]);
    for (int i = 0; i <= 4; i++)
    {
        villager[9].Friends[i] = NULL;
    }
    villager[9].Partner = NULL;
    villager[9].mbEI = true;
    villager[9].mbSN = false;
    villager[9].mbTF = true;
    villager[9].mbJP = false;
    villager[9].Head = Villager::Wound::FINE;
    villager[9].Torso = Villager::Wound::FINE;
    villager[9].ArmL = Villager::Wound::FINE;
    villager[9].ArmR = Villager::Wound::FINE;
    villager[9].LegL = Villager::Wound::FINE;
    villager[9].LegR = Villager::Wound::FINE;
    villager[9].Job = Villager::Role::HUNTER;
	villager[9].deathRisk = 0;

    ActiveVillagers++;


    //Carol Danvers, ENFJ Woman
    villager[10].idNumber = 10;
    villager[10].BirthYear = -20;
    villager[10].Age = 20;
    villager[10].Alive = true;
    villager[10].Forename = "Carol";
    villager[10].Surname = "Danvers";
    villager[10].FriendCount = 0;
    villager[10].Male = false;
    for (int i = 0; i <= 4; i++)
    {
        villager[10].Kid[i] = NULL;
    }
    villager[10].KidCount = 0;
    villager[10].Location = "Deesden";
    villager[10].SetParentF(&villager[0]);
    villager[10].SetParentM(&villager[0]);
    for (int i = 0; i <= 4; i++)
    {
        villager[10].Friends[i] = NULL;
    }
    villager[10].Partner = NULL;
    villager[10].mbEI = true;
    villager[10].mbSN = false;
    villager[10].mbTF = false;
    villager[10].mbJP = true;
    villager[10].Head = Villager::Wound::FINE;
    villager[10].Torso = Villager::Wound::FINE;
    villager[10].ArmL = Villager::Wound::FINE;
    villager[10].ArmR = Villager::Wound::FINE;
    villager[10].LegL = Villager::Wound::FINE;
    villager[10].LegR = Villager::Wound::FINE;
    villager[10].Job = Villager::Role::HOUSEWIFE;
	villager[10].deathRisk = 0;

    ActiveVillagers++;
}

void firstGeneration(int gen1, string homeTown)
{
	//Baby steps, let's create the base villager to act as "Parents" to the first generation
//can put this away as a function later and put him as Villager 0
	villager[0].idNumber = 0;
	villager[0].BirthYear = -99;
	villager[0].Age = 99;
	villager[0].Alive = false;
	villager[0].isPregnant = false;
	villager[0].Forename = "Fimbultyr";
	villager[0].Surname = "Allfather";
	villager[0].FriendCount = 0;
	villager[0].Male = true;
	for (int i = 0; i <= 4; i++)
	{
		villager[0].Kid[i] = NULL;
	}
	villager[0].KidCount = 0;
	villager[0].activeDialogue = 1;
	villager[0].dialogue[0][0] = "What have the Gods ever done for us?";
	villager[0].dialogue[0][1] = "Created the universe in a time before memory";
	for (int i = 1; i < 5; i++)
	{
		for (int k = 0; i < 2; i++)
		{
			villager[0].dialogue[i][k] = "";
		}
	}
	villager[0].dCount = 0;
	villager[0].Location = "Valhalla";
	villager[0].ParentF = NULL;
	villager[0].ParentM = NULL;
	for (int i = 0; i <= 4; i++)
	{
		villager[0].Friends[i] = NULL;
	}
	villager[0].Partner = NULL;
	villager[0].mbEI = true;
	villager[0].mbSN = true;
	villager[0].mbTF = true;
	villager[0].mbJP = true;
	villager[0].Head = Villager::Wound::MISSING;
	villager[0].Torso = Villager::Wound::CRIPPLED;
	villager[0].ArmL = Villager::Wound::BURNED;
	villager[0].ArmR = Villager::Wound::FINE;
	villager[0].LegL = Villager::Wound::SCARRED;
	villager[0].LegR = Villager::Wound::MISSING;
	villager[0].Job = Villager::Role::DEAD;
	villager[0].deathRisk = 0;

	ActiveVillagers++;

	for (int j = 1; j <= gen1; j++)
	{
		//Make sure to have 50/50 men and women for the first wave
		villager[j].idNumber = ActiveVillagers;
		if(((gen1/2) + 1) > j)
		{
			villager[j].Male = false;
		}
		else
		{
			villager[j].Male = true;
		}
		villager[j].BirthYear = -20;
		villager[j].Age = 20;
		villager[j].Alive = true;
		villager[j].isPregnant = false;
		if (villager[j].Male)
		{
			villager[j].Forename = MaleNamesArray[(rand() % MaleNameCount)];
		}
		else
		{
			villager[j].Forename = FemaleNamesArray[(rand() % FemaleNameCount)];
		}
		villager[j].Surname = SurnamesArray[(rand() % SurnamesCount)];//
		villager[j].FriendCount = 0;
		for (int i = 0; i <= 4; i++)
		{
			villager[j].Kid[i] = NULL;
		}
		villager[j].KidCount = 0;
		villager[j].activeDialogue = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int k = 0; i < 2; i++)
			{
				villager[j].dialogue[i][k] = "";
			}
		}
		villager[j].dCount = 0;
		villager[j].Location = homeTown;
		villager[j].SetParentF(&villager[0]);
		villager[j].SetParentM(&villager[0]);
		for (int i = 0; i <= 4; i++)
		{
			villager[j].Friends[i] = NULL;
		}
		villager[j].Partner = NULL;
		if (rand() % 2 == 0)
		{
			villager[j].mbEI = true;//
		}
		else 
		{
			villager[j].mbEI = false;//
		}

		if (rand() % 2 == 0)
		{
			villager[j].mbSN = true;//
		}
		else
		{
			villager[j].mbSN = false;//
		}

		if (rand() % 2 == 0)
		{
			villager[j].mbTF = true;//
		}
		else
		{
			villager[j].mbTF = false;//
		}

		if (rand() % 2 == 0)
		{
			villager[j].mbJP = true;//
		}
		else
		{
			villager[j].mbJP = false;//
		}

		villager[j].Head = Villager::Wound::FINE;
		villager[j].Torso = Villager::Wound::FINE;
		villager[j].ArmL = Villager::Wound::FINE;
		villager[j].ArmR = Villager::Wound::FINE;
		villager[j].LegL = Villager::Wound::FINE;
		villager[j].LegR = Villager::Wound::FINE;
		if (villager[j].Male)
		{
			switch (rand() % 3)
			{
			case 0:
				villager[j].Job = Villager::Role::FARMER;//
				break;

			case 1:
				villager[j].Job = Villager::Role::SMITH;//
				break;

			case 2:
				villager[j].Job = Villager::Role::SOLDIER;//
				break;

			case 3:
				villager[j].Job = Villager::Role::HUNTER;//
				break;
			}
		}
		else
		{
			switch (rand() % 2)
			{
			case 0:
				villager[j].Job = Villager::Role::WEAVER;//
				break;

			case 1:
				villager[j].Job = Villager::Role::HOUSEWIFE;//
				break;

			case 2:
				villager[j].Job = Villager::Role::FARMER;//
				break;
			}
		}
		villager[j].deathRisk = 0;

		ActiveVillagers++;
	}
}

int main()
{
    int MaxVillagers = 10;
	int StartVillagers = 10;
	int seed = 3000;

	std::cout << "<<<<	LOADING VILLAGER NAMES	>>>>\n";

	ifstream fin;
	string line;
	int loop = 0;
	//FIRST read in all of the names to be used for random generation
	// Open an existing file
	fin.open("..\\NameSheets\\BoyNames.csv");
	while (!fin.eof()) {
		MaleNameCount++;
		fin >> line;
		MaleNamesArray[loop] = line;
		loop++;
	}

	fin.close();
	loop = 0;

	// Open an existing file
	fin.open("..\\NameSheets\\GirlNames.csv");
	while (!fin.eof()) {
		FemaleNameCount++;
		fin >> line;
		FemaleNamesArray[loop] = line;
		loop++;
	}

	fin.close();
	loop = 0;

	// Open an existing file
	fin.open("..\\NameSheets\\Surnames.csv");
	while (!fin.eof()) {
		SurnamesCount++;
		fin >> line;
		SurnamesArray[loop] = line;
		loop++;
	}

	fin.close();

	std::cout << "<<<<	VILLAGER NAMES LOADED	>>>>\n";

	string villageName = "";
	//Get the village named
	std::cout << "\n Please enter the name of the village\n";
	std::cin >> villageName;

	while (villageName.empty())
	{
		std::cout << "Invalid input, please enter a name for the village\n";
		std::cin >> villageName;
	}

	villageName[0] = toupper(villageName[0]);

	for (std::size_t i = 1; i < villageName.length(); ++i)
		villageName[i] = tolower(villageName[i]);

	//Make sure the user input values for the starting number of Villagers is between 10 and 50, values may change later
	std::cout << "\n Enter the starting number of villagers (10-100)\n";
	std::cin >> StartVillagers;

	while (StartVillagers < 10 || StartVillagers > 100)
	{
		std::cout << "Input invalid, please enter a value between 10 and 100\n";
		std::cin >> StartVillagers;
	}


    //Make sure the user input values for max number of Villagers is between 10 and 300, values may change later and won't be used for feasability demo
    std::cout << "\n Enter the Max number of villagers (10-2999)\n";
    std::cin >> MaxVillagers;

    while (MaxVillagers < StartVillagers || MaxVillagers > 2999)
    {
        std::cout << "Input invalid, please enter a value between " << StartVillagers << " and 2999\n";
        std::cin >> MaxVillagers;
    }
	
	//input a seed for generating a village
	std::cout << "\n Please input a positive integer to act as the seed\n";
	std::cin >> seed;

	while (seed < 0)
	{
		std::cout << "The seed must be a positive integer, please enter a new seed\n";
		std::cin >> seed;
	}

	OtherTown town1("East", 10);
	OtherTown town2("West", 10);

    //feasabilityDemoPeople(); //for the demo, needs replacing
	firstGeneration(StartVillagers, villageName);//Generates the first 10-50 villagers (depending on player input)

	//life simulation test
	int Year = 0;
	//srand((unsigned)time(0));
	std::srand(seed);

	//running for 100 years for testing
	for (int i = 0; i < 100; i++)
	{
		for (int i = 0; i < ActiveVillagers; i++)
		{
			villager[i].SimulateYear(villager, ActiveVillagers, villager[i], MaleNamesArray, MaleNameCount,FemaleNamesArray, FemaleNameCount, SurnamesArray, villageName, ActiveVillagers, Year);
		}

		town1.populationChange();
		town2.populationChange();

		std::cout << "\n << A YEAR HAS PASSED, IT IS NOW YEAR " << Year << " >> \n";
		Year++;
	}

    //gimme that sweet output
    for (int i = 0; i < ActiveVillagers; i++)
    {
        villager[i].OutputData();
    }

	std::cout << "\n Generated using seed: " << seed << endl;
}


void lifeCycle()
{

}


void results()
{

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu