#include <iostream>

#include "object.h"
#include "world.h"
#include "character.h"
using namespace std;

int main()
{
    Object example("Beispiel");
    example.describe();
    cout << example.getName() << endl;
    Character taro("Taro", 40, "Human");


    return 0;
}
