#include "Square.h"
#include <iostream>

Square::Square(std::string name, int sideA) : Rhombus(name, sideA, 90, 90) {}

void Square::angles() {
    std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}

void Square::sides() {
    std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}