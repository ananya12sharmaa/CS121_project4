#ifndef RACE_H
#define RACE_H

class Race {
public:
    Race();
    void run();

private:
    const int Num_Horses;
    const int Track_length;
    Horse horses[Num_Horses];
};

#endif  // RACE_H

