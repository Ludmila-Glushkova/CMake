#include "EquilateralTriangle.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(std::string name, int sideA) : IsoscelesTriangle(name,
    sideA, sideA, 60, 60) {}

void EquilateralTriangle::angles() {
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}

void EquilateralTriangle::sides() {
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}