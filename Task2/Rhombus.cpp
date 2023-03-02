#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus(std::string name, int sideA, int angleA, int angleB) : Parallelogram(name, sideA, sideA, angleA, angleB) {}

void Rhombus::angles() {
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}

void Rhombus::sides() {
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}