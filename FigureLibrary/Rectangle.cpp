#include "Rectangle.h"

    Rectangle::Rectangle() {}
    Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    std::string Rectangle::get_name_figure()
    {
        return "Прямоуголник:";
    }
