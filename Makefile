horseRace: horse.o race.o main.o
	g++ horse.o race.o main.o -o horseRace

horse.o: horse.cpp Horse.h
	g++ -c horse.cpp

race.o: race.cpp Race.h Horse.h
	g++ -c race.cpp

main.o: main.cpp Race.h Horse.h
	g++ -c main.cpp

clean:
	rm -f *.o
	rm -f horseRace

run: horseRace
	./horseRace
