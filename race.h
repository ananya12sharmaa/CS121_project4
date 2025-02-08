#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <Horse.h>

class Race 
{

	private:
		const int Num_Horses = 5;
		const int Track_length = 15;
		Horse horses[Num_Horses];

	public:
		Race();
		void run()
};

#endif 
//RACE_H

