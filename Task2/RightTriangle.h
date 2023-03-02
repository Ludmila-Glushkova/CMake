#pragma once
#include "Triangle.h"

class RightTriangle : public Triangle {
protected:
    void sides();

    void angles();
public:
    RightTriangle(std::string name, int sideA, int sideB, int sideC,
        int angleA, int angleB);
};