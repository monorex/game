#include "character.h"
#include "object.h"
using namespace std;

Character::Character()
{

}
Character::Character(string myName, int myAge, string myRace) {
    setName(myName);
    this -> age = myAge;
    this -> Race = myRace;
    if (isDebug()) cout << "A " << Race << " named " << name << " was born in " << age << endl;
}
