#include "RightTriangle.h"
#include <iostream>

RightTriangle::RightTriangle(std::string name, int sideA, int sideB, int sideC,
    int angleA, int angleB) : Triangle(name, sideA, sideB,
        sideC, angleA, angleB, 90) {}

void RightTriangle::angles() {
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}

void RightTriangle::sides() {
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}