#pragma once
#include "Triangle.h"

class FUGURELIB_API Equil_triangle : public Triangle
{
private:
    int a, b, c;
    int A, B, C;
public:
    Equil_triangle();
    Equil_triangle(int a, int b, int c, int A, int B, int C);
    std::string get_name_figure();
};