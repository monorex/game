#include "object.h"
Object::Object(World * aWorld){
    this -> myWorld = aWorld;
}
Object::Object(string myName){
    this -> name = myName;
}

string Object::getName(){
    return name;
}

void Object::setName(string myName){
    name = myName;
}

void Object::describe(){
    cout << "This Object is " << name << endl;
}
