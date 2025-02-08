#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race 
{

	private:
		static const int Num_Horses = 5;
		const int Track_length = 15;
		Horse horses[Num_Horses];

	public:
		Race();
		void run();
};

#endif 
//RACE_H

