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
    Object(World * myWorld, string myName);
    virtual ~Object(){ if(isDebug()) cout << "Object " << name << " is destroyed\n";}

    virtual void setName(string myName);
    virtual string getName();
    virtual void describe();
    virtual bool isDebug();
protected:
    string name;
    World * myWorld = nullptr;
    bool debug = true;
};

#endif // OBJECT_H
