#include <iostream>
#include "bingoSquare.h"
#include <cstdlib>
#include <ctime>

using namespace std;

bingoSquare::bingoSquare(){
    
    number = rand() % 15 + 1;

}

int bingoSquare::print(){
    cout << number;
}