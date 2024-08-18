#ifndef BINGOSQUARE_H
#define BINGOSQUARE_H

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

class bingoSquare{
    public:
    bingoSquare();
    int print();
    static int srand(int time(0));

    private:
    int number;
};

#endif