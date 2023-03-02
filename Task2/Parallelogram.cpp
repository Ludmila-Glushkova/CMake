#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(std::string name, int sideA, int sideB, int angleA, int angleB) : Quadrilateral(name,
    sideA, sideA, sideB, sideB, angleA, angleA, angleB, angleB) {}

void Parallelogram::angles() {
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}

void Parallelogram::sides() {
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}