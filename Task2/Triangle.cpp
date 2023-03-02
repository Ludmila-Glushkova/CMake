#include "Triangle.h"
#include <iostream>

Triangle::Triangle(std::string name, int sideA, int sideB, int sideC,
    int angleA, int angleB, int angleC) : Figure(name) {
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
}

void Triangle::sides() {
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Triangle::angles() {
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}