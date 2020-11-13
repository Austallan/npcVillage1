// npcVillage1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Villager.h"

int main()
{
    //Baby steps, let's create the base villager to act as "Parents" to the first generation
    //can put this away as a function later and put him as Villager 0
    Villager Fimbultyr;

    Fimbultyr.Age = 99;
    Fimbultyr.Alive = false;
    Fimbultyr.Forename = "Fimbultyr";
    Fimbultyr.Surname = "Allfather";
    Fimbultyr.FriendCount = 0;
    Fimbultyr.Male = true;
    Fimbultyr.Kid = NULL;
    Fimbultyr.KidCount = 0;
    Fimbultyr.Location = "Valhala";
    Fimbultyr.ParentF = NULL;
    Fimbultyr.ParentM = NULL;
    Fimbultyr.Friends = NULL;
    Fimbultyr.Partner = NULL;
    Fimbultyr.mbEI = true;
    Fimbultyr.mbSN = true;
    Fimbultyr.mbTF = true;
    Fimbultyr.mbJP = true;
    Fimbultyr.Head.MISSING;
    Fimbultyr.Torso.CRIPPLED;
    Fimbultyr.ArmL.BURNED;
    Fimbultyr.ArmR.FINE;
    Fimbultyr.LegL.SCARRED;
    Fimbultyr.LegR.MISSING;
    Fimbultyr.Profession.HUNTER;//ALWAYS OUTPUTS AS FARMER, FIX

    //gimme that sweet output
    Fimbultyr.OutputData(Fimbultyr);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu