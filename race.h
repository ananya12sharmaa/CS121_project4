#include "horse.h"

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race 
{//beginning class def

	private:
		static const int Num_Horses = 5;
		const int Track_length = 15;
		Horse horses[Num_Horses];

	public:
		Race();
		void run();

};//ends class def

#endif 
