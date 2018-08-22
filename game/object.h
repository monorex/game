#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include <string>
#include "world.h"
using namespace std;

class Object{
public:
    Object(){}
    Object(World * myWorld);
    Object(string myName);
    virtual ~Object(){}

    virtual void setName(string myName);
    virtual string getName();
    virtual void describe();
private:
    string name;
    World * myWorld;
};

#endif // OBJECT_H
