#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(std::string name, int sideA, int sideB) : Parallelogram(name, sideA, sideB, 90, 90) {}

void Rectangle::angles() {
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}

void Rectangle::sides() {
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}