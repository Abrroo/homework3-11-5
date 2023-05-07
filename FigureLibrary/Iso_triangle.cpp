#include "Iso_triangle.h"


    Iso_triangle::Iso_triangle() {}
    Iso_triangle::Iso_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    std::string Iso_triangle::get_name_figure()
    {
        return "Равнобедренный треугольник:";
    }
