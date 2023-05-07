#pragma once

#include "Figure.h"

class FUGURELIB_API Quadrangle : public Figure
{
private:
    int a = 0, b = 0, c = 0, d = 0;
    int A = 0, B = 0, C = 0, D = 0;
    const int count_side_quadrangle = 4;
public:
    Quadrangle();
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    std::string get_name_figure() override;
    int get_count_sides();
};