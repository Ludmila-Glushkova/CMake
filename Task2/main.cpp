#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print(Figure& fig) {
    fig.print();
    std::cout << std::endl;
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle tr("Треугольник", 10, 15, 20, 30, 70, 80);
    RightTriangle right("Прямоугольный треугольник", 3, 4, 5, 40, 50);
    IsoscelesTriangle iso("Равнобедренный треугольник", 10, 20, 50, 40);
    EquilateralTriangle equ("Правильный треугольник", 55);
    Quadrilateral qua("Четырехугольник", 10, 11, 12, 13, 80, 90, 110, 80);
    Parallelogram par("Параллелограмм", 40, 10, 80, 100);
    Rectangle rec("Прямоугольник", 12, 18);
    Rhombus rho("Ромб", 40, 70, 110);
    Square square("Квадрат", 10);

    print(tr);
    print(right);
    print(iso);
    print(equ);
    print(qua);
    print(par);
    print(rec);
    print(rho);
    print(square);
}

