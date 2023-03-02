#pragma once
#include "Rhombus.h"

class Square : public Rhombus {
protected:
    void sides();

    void angles();

public:
    Square(std::string name, int sideA);
};