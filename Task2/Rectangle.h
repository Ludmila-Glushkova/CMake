#pragma once
#include "Parallelogram.h"

class Rectangle : public Parallelogram {
protected:
    void sides();

    void angles();

public:
    Rectangle(std::string name, int sideA, int sideB);
};