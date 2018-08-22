#include "character.h"

Character::Character()
{

}
Character::Character(string myName, int myAge, string myRace) {
    this -> name = myName;
    this -> age = myAge;
    this -> Race =myRace;
    if (isDebug()) std::cout << "A " << Race << " named " << name << " was born in " << age << std::endl;
}
