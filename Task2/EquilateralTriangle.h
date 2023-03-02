#pragma once
#include "IsoscelesTriangle.h"

class EquilateralTriangle : public IsoscelesTriangle {
protected:
    void sides();

    void angles();

public:
    EquilateralTriangle(std::string name, int sideA);
};