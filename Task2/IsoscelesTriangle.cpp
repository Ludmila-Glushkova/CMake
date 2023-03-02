#include "IsoscelesTriangle.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(std::string name, int sideA, int sideB, int angleA,
    int angleB) : Triangle(name, sideA, sideA, sideB, angleA, angleA,
        angleB) {}

void IsoscelesTriangle::angles() {
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}

void IsoscelesTriangle::sides() {
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}