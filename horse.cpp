#include "Race.h"
#include "Horse.h"
#include <iostream>
#include <random>


Horse::Horse(int id, int trackLength)
{
	Horse::id = id;
	Horse::trackLength = trackLength;
	Horse::postion = 0;
}

void Horse::advance()
{
	//randomly tossing the coint to decide if the horse moves or not
	//We know horses dont toss coins but that's what computers are here for us ;-)
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);

	int coin = dist(rd);
    
    	// If the coin lands on heads, move the horse forward
    	if (coin == 1)
	{
        	horses[horse;//since arrays are pointers
    	}
}//advance function ends



//to print the horses on track
void printLane(int horseNum, int *horses)
{
	//loop to print . at the race track length but where the horse number is
        for(int position=0; position<=raceLen; ++position )
        {
                if(horses[horseNum]==position)
                {
                        std::cout << horseNum;
                }//if block ends
                else
                {
                        std::cout << ".";
                }//else block ends
        }//loop ends
        std::cout << std::endl;//taking the control of cursor to the next line
}//printing function ends


//function the check if any horse won
bool isWinner(int horseNum, int *horses)
{
        bool winner = false;
        if(horses[horseNum]>= raceLen)
        {
                std::cout << "Our Horse " << horseNum << " WINS!!" << std::endl;
                winner = true;
        }
        return winner;
}

