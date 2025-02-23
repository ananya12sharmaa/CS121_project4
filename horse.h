#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse 
{//beginning the class definition

	private:
		int position;
		const int tracklength;
		int id;

	public:
    		Horse();
		Horse(int trackLength);
   		void init(int id, int trackLength);
   		void advance();
  		void printLane();
    		bool isWinner();

};//end class def

#endif

