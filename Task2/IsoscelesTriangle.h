#pragma once
#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
protected:
    void sides();

    void angles();

public:
    IsoscelesTriangle(std::string name, int sideA, int sideB, int angleA,
        int angleB);
};