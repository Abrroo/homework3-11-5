#pragma once

#include "Figure.h"

class FUGURELIB_API Triangle : public Figure
{
private:
    int a = 0, b = 0, c = 0;
    int A = 0, B = 0, C = 0;
    const int count_side_triangle = 3;
public:
    Triangle();
    Triangle(int a, int b, int c, int A, int B, int C);
    std::string get_name_figure() override;

    int get_count_sides();

};
