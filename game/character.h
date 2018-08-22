#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include "object.h"

class Character : public Object {
public:
    Character();
    Character(string myName, int myAge, string myRace = "Human");
    ~Character(){std::cout << "The " << Race << " " << name << " is about to dye.\n";}
protected:
    string Race;
    int age;
    int health;
};

#endif // CHARACTER_H
