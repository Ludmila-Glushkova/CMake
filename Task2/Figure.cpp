#include <iostream>
#include "Figure.h"

Figure::Figure(std::string name){ this->name = name; }
void Figure::sides() {}
void Figure::angles() {}
void Figure::print() {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: " << std::endl;
    sides();
    std::cout << std::endl;
    std::cout << "Углы: " << std::endl;
    angles();
}