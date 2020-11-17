// npcVillage1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Villager.h"

int main()
{
    //Baby steps, let's create the base villager to act as "Parents" to the first generation
    //can put this away as a function later and put him as Villager 0
    Villager Fimbultyr;

    Fimbultyr.idNumber = 0;
    Fimbultyr.Age = 99;
    Fimbultyr.Alive = false;
    Fimbultyr.Forename = "Fimbultyr";
    Fimbultyr.Surname = "Allfather";
    Fimbultyr.FriendCount = 0;
    Fimbultyr.Male = true;
    for (int i = 0; i <= 4; i++)
    {
        Fimbultyr.Kid[i] = NULL;
    }
    Fimbultyr.KidCount = 0;
    Fimbultyr.Location = "Valhalla";
    Fimbultyr.ParentF = NULL;
    Fimbultyr.ParentM = NULL;
    for (int i = 0; i <= 4; i++)
    {
        Fimbultyr.Friends[i] = NULL;
    }
    Fimbultyr.Partner = NULL;
    Fimbultyr.mbEI = true;
    Fimbultyr.mbSN = true;
    Fimbultyr.mbTF = true;
    Fimbultyr.mbJP = true;
    Fimbultyr.Head = Villager::Wound::MISSING;
    Fimbultyr.Torso = Villager::Wound::CRIPPLED;
    Fimbultyr.ArmL = Villager::Wound::BURNED;
    Fimbultyr.ArmR = Villager::Wound::FINE;
    Fimbultyr.LegL = Villager::Wound::SCARRED;
    Fimbultyr.LegR = Villager::Wound::MISSING;
    Fimbultyr.Job = Villager::Role::HUNTER;

    //gimme that sweet output
    Fimbultyr.OutputData(Fimbultyr);
}


void setup()
{

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