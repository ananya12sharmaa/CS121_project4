#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {
public:
    Horse();
    void init(int id, int trackLength);
    void advance();
    void printLane();
    bool isWinner();

private:
    int position;
    const int trackLength;
    int id;
};

#endif

