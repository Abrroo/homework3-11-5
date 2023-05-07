#include <iostream>
#include <cstring>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "Right_triangle.h"
#include "Iso_triangle.h"
#include "Equil_triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"


void get_info(Figure* figure)
{
    figure->print();
}

int main()
{
    setlocale(LC_ALL, "Russian");

    //                              (    Стороны    |    Углы       )
    //                                _____________   ____________
    //                                |   |   |   |   |  |   |   |
    //                                V   V   V   V   V  V   V   V
    Figure figure;
    Triangle triangle(10, 20, 30, 50, 60, 70);       // |
    Right_triangle right_triangle(10, 20, 30, 50, 60, 90);       // | Треугольники
    Iso_triangle iso_triangle(10, 20, 10, 50, 60, 50);       // |
    Equil_triangle equil_triangle(30, 30, 30, 60, 60, 60);       // |

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);   // |
    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);   // |
    Square square(20, 20, 20, 20, 90, 90, 90, 90);   // | Четырехуголники
    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);   // |
    Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);   // |


    //get_info(&figure);
    
    get_info(&triangle);
    get_info(&right_triangle);
    get_info(&iso_triangle);
    get_info(&equil_triangle);
    get_info(&quadrangle);
    get_info(&rectangle);
    get_info(&square);
    get_info(&parallelogram);
    get_info(&rhombus);


}
