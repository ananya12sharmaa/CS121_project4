#include "race.h"
#include "horse.h"
#include <iostream>
#include <random>


// Default constructor
//Horse::Horse() : tracklength(0), position(0), id(-1) {}

Horse::Horse(int trackLength) : tracklength(trackLength), position(0), id(0) {
    // No need to assign tracklength here
}

// Constructor that takes trackLength as a parameter
//Horse::Horse(int trackLength) : tracklength(trackLength), position(0), id(-1) {}
/*Horse::Horse(int trackLength)
{
	Horse::tracklength = trackLength;
	Horse::position = 0;
}*/


void Horse::init(int horseId, int trackLength) {
    id = horseId;
    tracklength = trackLength;
    position = 0;  // Or whatever the initial value is for position
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
		Horse::position++; //since arrays are pointers
    	}
}//advance function ends



//to print the horses on track
void Horse::printLane()
{

	//loop to print . at the race track length but where the horse number is
        for(int i=0; i <= Horse::tracklength; ++i )
        {
                if(i == Horse::position)
                {
                        std::cout << Horse::id;
                }//if block ends
                else
                {
                        std::cout << ".";
                }//else block ends
        }//loop ends
        std::cout << std::endl;//taking the control of cursor to the next line
}//printing function ends


//function the check if any horse won

bool Horse::isWinner() 
{
    bool winner = false;
    if (Horse::position >= Horse::tracklength) {
        std::cout << "Our Horse " << Horse::id << " WINS!!" << std::endl;
        winner = true;
    }
    return winner;
}

// Function to print all horses on the track (standalone function)
void printLane(int numHorses, Horse horses[]) {
    for (int i = 0; i < numHorses; ++i) {
        horses[i].printLane(); // Use index as identifier
    }
}
