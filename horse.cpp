#include "Race.h"
#include "Horse.h"
#include <iostream>

const int Num_Horses = 5;
const int Track_length = 15;

Race::Race() 
{
    for (int i = 0; i < Num_Horses; ++i) 
    {
        horses[i].init(i, Track_length);
    }//for block ends
}//race ends

void Race::run() 
{
    std::cout << "Hi there! You are here to witness a crazy fun horse race between our Horses numbered 0,1,2,3,4!" << std::endl;
    for (int i = 0; i < Num_Horses; ++i) 
    {
        horses[i].printLane();
    }//for block ends
    std::cout << "LET THE HORSE RACE BEGINNN!!" << std::endl;

    bool check = true;
    while (check) 
    {
        for (int i = 0; i < Num_Horses; ++i) 
	{
            horses[i].advance();
            horses[i].printLane();
        }

        for (int i = 0; i < Num_Horses; ++i) 
	{
            if (horses[i].isWinner()) 
	    {
                check = false;
            }
        }

        if (check) 
	{
            std::cout << "Press enter for another turn" << std::endl;
            std::cin.get();
        }//if block to keep running the 
    }
}

