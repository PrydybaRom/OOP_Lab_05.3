#include "class_B.h"
#include <iostream>

void B::f() {
    std::cout << "Function called from class B" << std::endl;
}

B::operator A& () {
    throw '1';
}
