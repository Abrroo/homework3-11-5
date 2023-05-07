#include "Parallelogram.h"

    Parallelogram::Parallelogram() {}
    Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
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
    std::string Parallelogram::get_name_figure()
    {
        return "ֿאנאככוכמדנאלל:";
    }