#include <iostream>
#include <typeinfo>
#include "class_B.h"


void g(A& a) {
    std::cout << typeid(a).name() << std::endl;
    if (typeid(a).name() == typeid(B).name())
        throw 1;
}

int main() {
    B b;

    try {
        A& a_ref = b;
        a_ref.f(); // Викликаємо f() через посилання на A
    }
    catch (char& e) {
        std::cerr << "char exception: " << e << std::endl;
    }

    try {
        g(b); 
    }
    catch (int& e) {
        std::cerr << "int exception: " << e << std::endl;
    }
    catch (...)
    {
        std::cout << "any exception" << std::endl;
    }

    return 0;
}
