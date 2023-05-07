#pragma once
#include "Triangle.h"

class FUGURELIB_API Right_triangle : public Triangle
{
private:
    int a = 0, b = 0, c = 0;
    int A = 0, B = 0, C = 0;
public:
    Right_triangle();
    Right_triangle(int a, int b, int c, int A, int B, int C);
    std::string get_name_figure();
};