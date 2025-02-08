#include "Race.h"
#include "Horse.h"
#include <iostream>

Race::Race() 
{
    for (int i = 0; i < Num_Horses; ++i) 
    {
        horses[i].init(i, Track_length);
    }
}

void Race::run() 
{
    std::cout << "Hi there! You are her to witness a crazy fun horse race between our Horses numbered 0,1,2,3,4!" << std::endl;
   
    bool race_check = true;
    while (race_check) 
    {
        for (int i = 0; i < Num_Horses; ++i) 
	{
            horses[i].advance();
            horses[i].printLane();
        }

        for (int i = 0; i < Num_Horses; ++i) 
	{
            if (horses[i].isWinner()) {
                race_check = false;
            }
        }

        if (race_check) 
	{
            std::cout << "The suspense......Press Enter to continue the race...\n";
            std::cin.get();
        }
    }
}
