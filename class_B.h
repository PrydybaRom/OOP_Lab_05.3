#pragma once
#include "class_A.h"

class B : public A {
public:
    void f() override;
    operator A& ();
};


