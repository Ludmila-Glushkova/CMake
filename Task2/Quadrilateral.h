#pragma once
#include "Figure.h"

class Quadrilateral : public Figure {
protected:
    int sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD;
    void sides();

    void angles();

public:
    Quadrilateral(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB,
        int angleC, int angleD);
};
