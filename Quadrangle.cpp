#include "Quadrangle.h"


    Quadrangle::Quadrangle() {}
    Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure(a, b, c, d, A, B, C, D)
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
    std::string Quadrangle::get_name_figure()
    {
        return "Четырёхугольник:";
    }
    int Quadrangle::get_count_sides()
    {
        return count_side_quadrangle;
    }
