#pragma once
#include "Parallelogram.h"

class Rhombus : public Parallelogram {
protected:
    void sides();

    void angles();

public:
    Rhombus(std::string name, int sideA, int angleA, int angleB);
};
