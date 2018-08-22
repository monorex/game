#include "object.h"
Object::Object(World * aWorld){
    this -> myWorld = aWorld;
}
Object::Object(string myName){
    this -> name = myName;
}

string Object::getName(){
    return this ->  name;
}

void Object::setName(string myName){
    this -> name = myName;
}

void Object::describe(){
    cout << "This Object is " << name << endl;
}

bool Object::isDebug(){
    return debug;
}
