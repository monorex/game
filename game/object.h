#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include <string>

using namespace std;

class Object{
public:
    Object(){}
    Object(string myName);
    ~Object(){}

    virtual void setName(string myName);
    virtual string getName();

private:
    string name;

};

#endif // OBJECT_H
