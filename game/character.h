#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include "object.h"

using namespace std;

class Character : public Object {
public:
    Character();
    Character(string myName, int myAge, string myRace = "Human");
    virtual ~Character(){
        if (isDebug())std::cout << "The " << Race << " " << name << " is about to dye.\n";
        debug =false;
    }
protected:
    string Race;
    int age;
    int health;
};

#endif // CHARACTER_H
