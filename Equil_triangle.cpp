#include "Equil_triangle.h"


    Equil_triangle::Equil_triangle() {}
    Equil_triangle::Equil_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    std::string Equil_triangle::get_name_figure()
    {
        return "Равносторонний треугольник:";
    }