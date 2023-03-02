#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
protected:
    void sides();

    void angles();

public:
    Parallelogram(std::string name, int sideA, int sideB, int angleA, int angleB);
};