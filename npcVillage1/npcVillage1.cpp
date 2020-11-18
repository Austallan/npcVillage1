// npcVillage1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Villager.h"
#include <iostream>

Villager villager[300];
int ActiveVillagers = 0;

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
    villager[1].ParentF = &villager[0];
    villager[1].ParentM = &villager[0];
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
    villager[2].ParentF = &villager[0];
    villager[2].ParentM = &villager[0];
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
    villager[3].ParentF = &villager[0];
    villager[3].ParentM = &villager[0];
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
    villager[4].ParentF = &villager[0];
    villager[4].ParentM = &villager[0];
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
    villager[5].ParentF = &villager[0];
    villager[5].ParentM = &villager[0];
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
    villager[6].ParentF = &villager[0];
    villager[6].ParentM = &villager[0];
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
    villager[7].ParentF = &villager[0];
    villager[7].ParentM = &villager[0];
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
    villager[8].ParentF = &villager[0];
    villager[8].ParentM = &villager[0];
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
    villager[9].ParentF = &villager[0];
    villager[9].ParentM = &villager[0];
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
    villager[10].ParentF = &villager[0];
    villager[10].ParentM = &villager[0];
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

    ActiveVillagers++;
}

int main()
{
    int MaxVillagers = 10;

    ////Make sure the user input values for max number of Villagers is between 10 and 300, values may change later and won't be used for feasability demo
    //int InputMaxVillagers;
    //std::cout << "\n Enter the Max number of villagers (10-300)\n";
    //std::cin >> InputMaxVillagers;

    //while (InputMaxVillagers < 10 || InputMaxVillagers > 300)
    //{
    //    std::cout << "Input invalid, please enter a value between 10 and 300\n";
    //    std::cin >> InputMaxVillagers;
    //}

    //MaxVillagers = InputMaxVillagers;

    feasabilityDemoPeople();

    //gimme that sweet output
    for (int i = 0; i < ActiveVillagers; i++)
    {
        villager[i].OutputData(villager[i]);
    }
}





void firstGeneration()
{

}


void lifeCycle()
{

}


void results()
{

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu