#include <iostream>
#include "Class_settings.h"

int main() {

    binTree firstTry;
    firstTry.makeNewNode(10);
    firstTry.makeNewNode(15);
    firstTry.makeNewNode(30);
    firstTry.makeNewNode(2);
    firstTry.makeNewNode(40);
    firstTry.makeNewNode(32);
    firstTry.makeNewNode(1);
    firstTry.printAllNodeValues(firstTry.giveMeFirst());


    return 0;
}