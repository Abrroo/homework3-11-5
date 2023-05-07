#pragma once
#include "Triangle.h"

class FUGURELIB_API Iso_triangle : public Triangle
{
private:
    int a = 0, b = 0, c = 0;
    int A = 0, B = 0, C = 0;
public:
    Iso_triangle();
    Iso_triangle(int a, int b, int c, int A, int B, int C);
    std::string get_name_figure();

};