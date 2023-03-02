#pragma once
#include "Figure.h"

class Triangle : public Figure {
protected:
    int sideA, sideB, sideC, angleA, angleB, angleC;
    void sides();

    void angles();

public:
    Triangle(std::string name, int sideA, int sideB, int sideC,
        int angleA, int angleB, int angleC);
};