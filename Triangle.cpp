#include "Triangle.h"


    Triangle::Triangle() {}
    Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Figure(a, b, c, A, B, C)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    std::string Triangle::get_name_figure()
    {
        return "Треугольник:";
    }

    int Triangle::get_count_sides()
    {
        return count_side_triangle;
    }

